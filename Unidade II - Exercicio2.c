//Exercicio unidade II
//Em algumas situações, em uma aplicação, é preciso determinar quais são os números múltiplos de um ou mais valores, dentre todos os valores de um conjunto de dados.
//Dessa forma, faça um programa que leia um número e informe se ele é divisível por três e por sete

#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;

    printf("Informe um numero: \n\t\t >>> ");
    scanf("%d", &numero);
    

    if(numero % 3 == 0)
    {
        printf("\nO numero %d eh divisivel por 3\n", numero); 
    }
    if(numero % 7 == 0)
    {
        printf("O numero %d eh divisivel por 7\n", numero);
    } 

    return 0;
}