#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

int main()
{
setlocale(LC_ALL, "Portuguese");
int idade, tempo_servico;

printf ("*------------------------------------------------------*\n");    
printf ("|                    POO - LISTA 1                     |\n");
printf ("*------------------------------------------------------*\n");
printf("5. Leia a idade e o tempo de serviço de um trabalhador e\nescreva se ele pode ou não se aposentar.\nAs condições para aposentadoria são:\n* Ter pelo menos 65 anos.\n* Ter trabalhado pelo menos 30 anos.\n* Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.\n");
printf ("*------------------------------------------------------------*\n");
printf("- Qual a sua idade?\nDigite abaixo:\n");
scanf("%d", &idade);
printf("- Você tem quanto tempo de serviço na Junior's Corporation?\nDigite abaixo:\n");
scanf("%d", &tempo_servico);
system("cls");

if(idade >= 65 || tempo_servico >= 30 || (idade>=60 && tempo_servico >=25)){
system("color A2");
printf("\n\n* Muito velho, você pode se aposentar! :D\nPARABÉNS!\n\n");
system("color A2");
system("color 2A");
system("color A2");
system("color 2A");
system("color A2");
system("color 2A");
system("color A2");
system("color 2A");
system("color A2");
system("color 2A");
system("color A2");
system("color 2A");
system("color A2");
system("color 2A");
system("color A2");
system("color 2A");
system("color A2");
system("color af");

}else {
printf("* Cê tá novo ainda amigão, ainda não pode ser aposentar.\n");
printf("VOLTE AO TRABALHO!\n");
system("color 40");
for (int i = 0; i < 7; i++){
    printf("\n%d", i);
     for (int j = 0; j < 8; j++) {
    printf("....");
    Sleep(20);
    }
    printf("\r");
     for (int j = 0; j < 15; j++) {
    printf(" VOLTE AO TRABALHO! ");
    }
    printf("\r");
}
}
return 0;
}
