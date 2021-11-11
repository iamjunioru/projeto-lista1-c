#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int par(int i);

int main()
{
setlocale(LC_ALL, "Portuguese");
int i, n, o;
    
printf ("*------------------------------------------------------*\n");    
printf ("|                    POO - LISTA 1                     |\n");
printf ("*------------------------------------------------------*\n");
printf("4. Faça um programa que leia um número inteiro positivo\npar N e imprima todos os números pares de 0 até N em ordem\ncrescente e todos os números ímpares em ordem decrescente.\n");
printf ("*-----------------------------------------------------------*\n");
printf("- Insira um numero inteiro[CRESCENTE]:\n");
scanf("%d", &i);
system("color a");
    
par(i);  
}

int par(int i)
{
int n;
	
if(i >= 0)
{
printf("\n* Numeros pares:\n");
for(n=0; n <= i; n++)
{
if(n % 2 == 0)
printf("\t[ %d ]", n);
	}
}

int o;
printf("\n\n- Insira um numero inteiro[DECRESCENTE]:\n"); 
scanf("%d", &n); 


printf("\n* Numeros pares:\n");
for (o=n; o>=0; o--)

printf("\t[ %d ]", o); 

return 0; 
}
