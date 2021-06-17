//Unidade II
//Exercicio 1 - Na prática
//É comum, em uma aplicação, ter de determinar quais números são o maior ou o menor, dentre todos os valores de um conjunto de dados. Assim sendo, escreva 
//um programa que receba cinco números inteiros e apresente o maior e o menor.
#include <stdio.h>

int main(){
   
    int numero, maior, menor, i;

    printf("Informe o primeiro numero? \n\t\t >>> ");
    scanf("%d", &numero);
    maior = numero;
    menor = numero;
    printf("Informe o segundo numero? \n\t\t >>> ");
    scanf("%d", &numero);
    if(numero > maior)
        maior = numero;
    if(numero < menor)
        menor = numero;
    printf("Informe o terceiro numero? \n\t\t >>> ");
    scanf("%d", &numero);
    if(numero > maior)
        maior = numero;
    if(numero < menor)
        menor = numero;
    printf("Informe o quarto numero? \n\t\t >>> ");
    scanf("%d", &numero);
    if(numero > maior)
        maior = numero;
    if(numero < menor)
        menor = numero;
    printf("Informe o quinto numero? \n\t\t >>> ");
    scanf("%d", &numero);
    if(numero > maior)
        maior = numero;
    if(numero < menor)
        menor = numero;
    
    printf("O maior numero \n\t\t >>> %d", maior);
    printf("\nO menor numero \n\t\t >>> %d", menor);
    return 0;
}