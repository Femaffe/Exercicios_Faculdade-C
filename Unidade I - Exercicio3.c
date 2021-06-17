//Unidade I
//Exercicio 3 - Na prática
//Escreva um programa que leia um número positivo inteiro e apresente o quadrado e a raiz quadrada deste número. 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int numero;
    float quadrado, raizQuadrada;

    printf("Informe um numero: \n\t\t >>> ");
    scanf("%i", &numero);

    quadrado = numero * 2;
    raizQuadrada = sqrt(numero);

    printf("O quadrado do numero %i eh:\n\t\t >>> %.2f", numero, quadrado);
    printf("\nA raiz quadrada do numero %i eh:\n\t\t >>> %.2f", numero, raizQuadrada);
    
    return 0;

}