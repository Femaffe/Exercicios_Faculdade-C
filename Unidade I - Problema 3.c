//Exercicio unidade I
//Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e 
//apresente o valor do rendimento e o valor total (valor do depósito + valor do rendimento).

#include <stdio.h> 
#include <stdlib.h> 

int main(){                 

    float deposito, taxa, rendimento, vTotal;

    printf("Informe o valor do deposito: \n\t\t >>> ");
    scanf("%f", &deposito);
    printf("Informe a taxa de juros: \n\t\t >>> ");
    scanf("%f", &taxa);

    rendimento = deposito * (taxa/100);
    vTotal = deposito + rendimento;

    printf("\nO rendimento eh: \n\t\t >>> %f", rendimento);
    printf("\nO total eh: \n\t\t >>> %f", vTotal);

    return 0;
}               