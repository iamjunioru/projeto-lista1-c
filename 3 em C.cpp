// obs: poderia ter sido feito com for,  mas estou aprimorando meus conhecimentos em while e do while;
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main()
{
setlocale(LC_ALL, "Portuguese");
int n, maior, count;


printf ("*------------------------------------------------------*\n");    
printf ("|                    POO - LISTA 1                     |\n");
printf ("*------------------------------------------------------*\n");
printf("3. Escreva um algoritmo que leia certa quantidade de números e\nimprima o maior deles e quantas vezes o maior número foi lido.\nA quantidade de números a serem lidos deve ser fornecida pelo usuário.\n");
printf ("*----------------------------------------------------------------------*\n");
printf("(TECLE 0 PARA TER O RESULTADO)\n");
system("color a");
system("color b");
system("color c");
system("color d");
system("color e");
system("color f");
system("color 1");
system("color 2");
system("color 3");
system("color 4");
system("color 5");
system("color 6");
system("color f");
printf("- Digite algum número:\n");
scanf("%i", &n);


maior = n;
count = 1; 

while(n != 0)
{
printf("digite um número:\n");
scanf("%i", &n);

if(maior <  n){
maior = n; // recebe o maior
}
if(maior==n){
count=count+1; //contador de vezes
 }
}
system("cls");
system("color a");
printf ("---------------------------------\n\n");
printf("O maior número escrito foi %i.\nQuantas vezes foi escrito? %i\n", maior, count);
       
return 0;
}
