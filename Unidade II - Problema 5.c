//Exercicio unidade II
//Faça um programa que informe a quantidade total de calorias a partir da escolha do usuário, que deve informar o prato típico e a bebida. A tabela de calorias 
//encontra-se a seguir:
//Italiano        - 750 cal
//Japones         - 324 cal
//Salvadorenho    - 545 cal
//Chá             -  30 cal
//Suco de laranja -  80 cal
//Refrigerante    -  90 cal
#include <stdio.h>
#include <stdlib.h>

int main(){

    int opcao;
    float total;

    total = 0;
    
    printf(">>>> 1 <<<< ITALIANO\n");
    printf(">>>> 2 <<<< JAPONES\n");
    printf(">>>> 3 <<<< SALVADORENHO\n");
    printf("Informa o prato desejado: \n\t\t >>> ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1: total = total + 750;
        break;
    case 2: total = total + 324;
        break;
    case 3: total = total + 545;
        break;
    }

    system ("CLS");

    printf(">>>> 1 <<<< CHA\n");
    printf(">>>> 2 <<<< SUCO DE LARANJA\n");
    printf(">>>> 3 <<<< REFRIGERANTE\n");
    printf("Informa a bebida desejada: \n\t\t >>> ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1: total = total + 30;
        break;
    case 2: total = total + 80;
        break;
    case 3: total = total + 90;
        break;
    }

    system ("CLS");

    printf("\n\n\n\nO total de calorias eh: \n\t\t >>> %.2f\n\n\n\n", total);

    return 0;
}