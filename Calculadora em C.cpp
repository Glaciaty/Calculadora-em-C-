#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <ctype.h>

void menu() {
    printf("Escolha uma opera��o:\n");
    printf("1. Soma\n");
    printf("2. Subtra��o\n");
    printf("3. Multiplica��o\n");
    printf("4. Divis�o\n");
    printf("0. Encerrar o programa\n\n");
}

void soma() {
float num1, num2, total;
printf("\nDigite o primeiro n�mero: ");
scanf("%f", &num1);
printf("Digite o segundo n�mero: ");
scanf("%f",&num2);
total = num1 + num2;
printf("\nO resultado da soma �: %.2f\n\n",total);
system ("pause");
}

void sub() {
float num1, num2, total;
printf("\nDigite o primeiro n�mero: ");
scanf("%f", &num1);
printf("Digite o segundo n�mero: ");
scanf("%f",&num2);
total = num1 - num2;
printf("\nO resultado da subtra��o �: %.2f\n\n",total);
system ("pause");
}

void mult() {
float num1, num2, total;
printf("\nDigite o primeiro n�mero: ");
scanf("%f", &num1);
printf("Digite o segundo n�mero: ");
scanf("%f",&num2);
total = num1 * num2;
printf("\nO resultado da multiplica��o �: %.2f\n\n",total);
system ("pause");
}

void div() {
float num1, num2, total;
printf("\nDigite o primeiro n�mero: ");
scanf("%f", &num1);
printf("Digite o segundo n�mero: ");
scanf("%f",&num2);

if (num2 == 0)
printf ("Voc� n�o pode dividir por zero\n\n");
else {
total = num1 / num2;
printf("\nO resultado da divis�o �: %.2f\n\n",total);
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
    printf("Op��o inv�lida.\n\n");
    system("pause");
    fflush(stdin);
}

}

while (opcao != 0);
    return 0;
}
