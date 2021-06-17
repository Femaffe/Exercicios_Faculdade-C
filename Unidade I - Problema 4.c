//Exercicio unidade I
//Escreva um programa que receba dois números, calcule e apresente o resultado do primeiro número elevado ao segundo.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float numero1, numero2, resultado;
   
    printf("Informa o primeiro numero: \n\t\t >>> ");
    scanf("%f", &numero1);
    printf("Informa o segundo numero: \n\t\t >>> ");
    scanf("%f", &numero2);

    resultado = pow(numero1,numero2);

    printf("\n %.2f elevado a %.2f eh: %.2f", numero1, numero2, resultado);

    return 0;
}