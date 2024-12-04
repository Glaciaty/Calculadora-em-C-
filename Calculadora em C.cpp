#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <ctype.h>

void menu() {
    printf("Escolha uma operação:\n");
    printf("1. Soma\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("0. Encerrar o programa\n\n");
}

void soma() {
float num1, num2, total;
printf("\nDigite o primeiro número: ");
scanf("%f", &num1);
printf("Digite o segundo número: ");
scanf("%f",&num2);
total = num1 + num2;
printf("\nO resultado da soma é: %.2f\n\n",total);
system ("pause");
}

void sub() {
float num1, num2, total;
printf("\nDigite o primeiro número: ");
scanf("%f", &num1);
printf("Digite o segundo número: ");
scanf("%f",&num2);
total = num1 - num2;
printf("\nO resultado da subtração é: %.2f\n\n",total);
system ("pause");
}

void mult() {
float num1, num2, total;
printf("\nDigite o primeiro número: ");
scanf("%f", &num1);
printf("Digite o segundo número: ");
scanf("%f",&num2);
total = num1 * num2;
printf("\nO resultado da multiplicação é: %.2f\n\n",total);
system ("pause");
}

void div() {
float num1, num2, total;
printf("\nDigite o primeiro número: ");
scanf("%f", &num1);
printf("Digite o segundo número: ");
scanf("%f",&num2);

if (num2 == 0)
printf ("Você não pode dividir por zero\n\n");
else {
total = num1 / num2;
printf("\nO resultado da divisão é: %.2f\n\n",total);
}
system ("pause");
}

int main () {
setlocale(LC_ALL,"Portuguese");
char opcao_s[10];
int opcao;
float num1, num2, total;

do {
system ("CLS");
menu();
scanf("%s", &opcao_s);
fflush(stdin);

if (isdigit(opcao_s[0]) && opcao_s[1] == '\0') {
opcao = opcao_s[0] - '0'; 
} else {
opcao = -1;
}

if(opcao == 1){
soma();
fflush(stdin);
}

else if(opcao == 2){
sub();
fflush(stdin);
}

else if(opcao == 3){
mult();
fflush(stdin);
}

else if(opcao == 4){
div();
fflush(stdin);
}

else if(opcao == 0){
    printf("Programa encerrado.\n\n");
    system("pause");
    return 0;
}

else if(opcao < 0 || opcao > 4){
    printf("Opção inválida.\n\n");
    system("pause");
    fflush(stdin);
}

}

while (opcao != 0);
    return 0;
}
