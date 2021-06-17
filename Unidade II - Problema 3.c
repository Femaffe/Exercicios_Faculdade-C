//Exercicio unidade II
//Construa um programa que receba a idade de uma pessoa e identifique sua classe eleitoral: não eleitor (menor que 16 anos de idade), eleitor obrigatório (entre 18 e 
//65 anos) e eleitor facultativo (entre 16 e 18 anos e maior que 65 anos).

#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade;

    printf("Informe sua idade: \n\t\t >>> ");
    scanf("%i", &idade);
    
    system("CLS");

    if(idade < 16){
        printf("\nNao eleitor"); 
    }
    else
    {
        if((idade < 18) || (idade > 65)){
            printf("\nEleitor facultativo"); 
        }
        else{
            printf("\nEleitor obrigatorio");
            }
        }
 
    return 0;
}