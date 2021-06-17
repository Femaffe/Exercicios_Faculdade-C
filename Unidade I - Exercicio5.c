//Unidade I
//Exercicio 5 - Na prática
//Escreva um programa que, dado o raio de um círculo, calcule sua área e o perímetro. A área é a superfície do objeto, dada por A = PI * pow(r*2), e o perímetro é a medida do contorno 
//do objeto dado por P=2 * π * r . Dica: utilize as funções intrínsecas vistas nesta unidade. 
#include <stdio.h>
#include <math.h>
#define pi 3.141593

int main()
{
    float raio;
    printf("Digite o valor do raio: \n\t\t >>> ");
    scanf("%f", &raio);
    printf("\nValor da area: \n\t\t >>> %f", pi * pow(raio,2));
    printf("\nValor da perimetro: \n\t\t >>> %f", 2 * pi * raio);
    return (0);
}
