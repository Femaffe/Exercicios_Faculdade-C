//Unidade I
//Exercicio 4 - Na prática
//Escreva um programa que receba quatro números inteiros, calcule e apresente a média aritmética entre eles. Observação: não esqueça de formatar o valor da média no 
//momento de apresentá-lo, para que sejam impressas apenas duas casas decimais.
#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, num3, num4;
    float media;

    printf("Digite o primeiro numero: \n\t\t >>> ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: \n\t\t >>> ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: \n\t\t >>> ");
    scanf("%d", &num3);
    printf("Digite o quarto numero: \n\t\t >>> ");
    scanf("%d", &num4);

    media = (num1 + num2 + num3 + num4)/4;

    printf("A media entre os numeros digitados eh: \n\t\t >>> %.2f", media);

    return 0;
}
