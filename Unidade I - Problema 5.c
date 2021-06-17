//Exercicio unidade I
//Elabore um programa que calcule a área de um trapézio. 

#include <stdio.h>
#include <stdlib.h>

int main(){

    float base1, base2, altura, area;

    printf("Informe o valor da base maior: \n\t\t >>> ");
    scanf("%f", &base1);
    printf("Informe o valor da base menor: \n\t\t >>> ");
    scanf("%f", &base2);
    printf("Informe o valor da altura: \n\t\t >>> ");
    scanf("%f", &altura);

    area = ((base1 + base2) * altura)/2;

    printf("\nA area do trapezio eh: %.2f", area);

    return 0;
}