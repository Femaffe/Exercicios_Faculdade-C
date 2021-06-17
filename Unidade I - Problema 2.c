//Exercicio unidade I
//Elabore um programa que receba quatro notas e calcule a média aritmética entre elas.
#include <stdio.h>

int main(){

    float nota1, nota2, nota3, nota4, media;

    printf("\nDigite a primeira nota: \n\t\t >>> ");
    scanf("%f", &nota1);

    printf("\nDigite a segunda nota: \n\t\t >>> ");
    scanf("%f", &nota2);

    printf("\nDigite a terceira nota: \n\t\t >>> ");
    scanf("%f", &nota3);

    printf("\nDigite a quarta nota: \n\t\t >>> ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("\nVoce informou as seguintes notas: \n\t\t >>> %.2f\n\t\t >>> %.2f\n\t\t >>> %.2f\n\t\t >>> %.2f", nota1, nota2, nota3, nota4);
    printf("\nA sua media eh: \n\t\t >>> %.2f", media);
    
    return 0;
}