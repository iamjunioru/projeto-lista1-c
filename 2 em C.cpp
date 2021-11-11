#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main()
{
setlocale(LC_ALL, "Portuguese");
int a1, a2, a3, n, s, a, soma, opcao;

//printf(" ######  ######  ### \n");          
//printf(" #     # #     #  #  \n");         
//printf(" #     # #     #  #  \n");        
//printf(" ######  #     #  #  \n");      
//printf(" #       #     #  #  \n");       
//printf(" #       ######  ### \n");
    
printf ("*------------------------------------------------------*\n");    
printf ("|                    POO - LISTA 1                     |\n");
printf ("*------------------------------------------------------*\n");
printf("2. Ler um número inteiro e imprimir a soma do sucessor\nde seu triplo com o antecessor de seu dobro.\n");
printf ("*------------------------------------------------------*\n");
printf("- Digite algum número:\n");
scanf("%i", &n);
system("cls");

s=n*3+1;
a=n*2-1;

soma=s+a;

system("color a");
printf("========================================\n");
printf("O sucessor do triplo do numero %i é %i\nJá o antecessor do seu dobro é %i.\n", n, s, a);
printf("========================================\n");
// sistema de load
for (int i = 0; i < 8; i++){
    printf("%d", i);
     for (int j = 0; j < 30; j++) {
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
system("color f");
printf("---------------------------------\nA resposta está correta?\nDigite 1 para SIM ou 2 para NÃO.\n");
scanf("%d",  &opcao);
system("cls");
system("color a");
if (opcao == 1)
    printf("Você disse %i(SIM).\n\nResumindo...\n\nO sucessor do triplo do numero %i é %i\nJá o antecessor do seu dobro é %i.\n===========================================\nA soma do sucessor com o antecessor é: %i", opcao, n, s, a, soma);  
  else if (opcao > 2)
      printf("Sua resposta é %d(sim)", opcao);
    else
      for (int i = 0; i < 10; i++){
    printf("Por favor, aguarde. \n %o ", i);
     for (int j = 0; j < 10; j++) {
    printf("...");
    Sleep(20);
    }
    system("cls");
    printf("\r");
    system("color 04");
     for (int j = 0; j < 3; j++) {
    printf("< REINICIE O PROGRAMA E REFAÇA > ");
    }
    printf("\r");
    return 0;
}  
  // printf(" A soma do sucessor com o antecessor e: %i ",Soma); 
   
return 0;
}
