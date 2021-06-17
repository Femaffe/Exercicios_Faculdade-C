//Exercicio unidade II
//Elabore um programa que receba o nome e a idade de uma pessoa e informe o nome, a idade e o valor da mensalidade do plano de saúde. A tabela a seguir 
//apresenta os valores de mensalidade
//Até 18 anos -      R$50,00
//De 19 a 29 anos -  R$70,00
//De 30 a 45 anos -  R$90,00
//De 46 a 65 anos -  R$130,00
//Acima de 65 anos - R$170,00

#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[50];
    int idade;

    printf("Informe seu nome: \n\t\t >>> ");
    scanf("%s", &nome);
    printf("Informe sua idade: \n\t\t >>> ");
    scanf("%i", &idade);
    
    system("CLS");

    printf("\nNome: \n\t\t >>> %s", nome);
    printf("\nNome: \n\t\t >>> %d", idade);
    if(idade <= 18){
        printf("\nValor da mensalidade: R$50,00"); 
    }
    else
    {
        if((idade >= 19) && (idade <= 29)){
            printf("\nValor da mensalidade: R$70,00"); 
        }
        else{
            if((idade >= 30) && (idade <= 45)){
                printf("\nValor da mensalidade: R$90,00");
            }
            else{
                if((idade >= 46) && (idade < 65)){
                    printf("\nValor da mensalidade: R$130,00");
                }
                else{
                    printf("\nValor da mensalidade: R$170,00");
                }
            }
        }
    }
    return 0;
}