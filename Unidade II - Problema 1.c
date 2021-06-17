//Exercicio unidade II
//Faça um programa que leia um número e informe se ele é divisível por cinco.

#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;

    printf("Informe um numero: \n\t\t >>> ");
    scanf("%d", &numero);
    
    if(numero % 5 == 0)
    {
        printf("O numero %d eh divisivel por 5\n", numero); 
    }
    else
    {
        printf("O numero nao %d eh divisivel por 5\n", numero);
    } 

    return 0;
}