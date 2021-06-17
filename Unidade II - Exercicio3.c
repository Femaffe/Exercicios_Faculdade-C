//Exercicio unidade II
//Considere uma aplicação que necessita de um calendário embutido. Assim sendo, construa um programa que, dado um número inteiro, informe o mês correspondente.

#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;

    printf("Digite o numero de 1 a 12: \n\t\t >>> ");
    scanf("%d", &numero);
    
    switch (numero)
    {
    case 1: printf("\n\t\t >>> Janeiro. \n");
       break;
    case 2: printf("\n\t\t >>> Fevereiro. \n");
       break;
    case 3: printf("\n\t\t >>> Marco. \n");
       break;
    case 4: printf("\n\t\t >>> Abril \n");
       break;
    case 5: printf("\n\t\t >>> Maio. \n");
       break;
    case 6: printf("\n\t\t >>> Junho. \n");
       break;
    case 7: printf("\n\t\t >>> Julho \n");
       break;
    case 8: printf("\n\t\t >>> Agosto. \n");
       break;
    case 9: printf("\n\t\t >>> Setembro. \n");
       break;
    case 10: printf("\n\t\t >>> Outubro. \n");
       break;
    case 11: printf("\n\t\t >>> Novembro. \n");
       break;
    case 12: printf("\n\t\t >>> Dezembro. \n");
       break;
    default:
        break;
    }

    return 0;
}