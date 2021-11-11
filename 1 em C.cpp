#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main()
{
setlocale(LC_ALL, "Portuguese");
float metros, decimetros, centimetros, milimetros;


printf ("*------------------------------------------------------*\n");    
printf ("|                    POO - LISTA 1                     |\n");
printf ("*------------------------------------------------------*\n");
printf("1. Fazer um programa que pergunta um valor em metros \ne imprime o correspondente em:\ndecímetros, centímetros e milímetros.\n");
printf ("*------------------------------------------------------*\n");
printf("- Informe o valor em metros:\n");
scanf("%f",&metros);
system("cls");

decimetros=metros*10;

centimetros=metros*100;

milimetros=metros*1000;

// loading
system("color 04");
for (int i = 0; i < 4; i++){
    printf("Por favor,aguarde\n%d", i);
     for (int j = 0; j < 6; j++) {
    printf(".");
    Sleep(20);
    }
    printf("\r");
     for (int j = 0; j < 60; j++) {
    printf(" ");
    }
    printf("\r");
}

system("cls");
system("color A");

printf("Resposta:");
printf("\nO valor em decimetros é:\n%f\n", decimetros);

printf("O valor em centimetros é:\n%f\n", centimetros);

printf("O valor em milimetros é:\n%f", milimetros);

}



