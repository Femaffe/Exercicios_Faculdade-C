//Exercicio unidade II
//De acordo com uma tabela médica, o peso ideal está relacionado com a altura e o sexo. Elabore um algoritmo que receba altura e sexo de uma pessoa e calcule e 
//imprima o seu peso ideal, sabendo que:
//Homens (72.7 * altura) - 58
//Mulheres (62.1 * altura) - 44.7 
#include <stdio.h>
#include <stdlib.h>

int main(){

    float altura, peso;
    char sexo;

    printf("Informe o sexo (M/F): \n\t\t >>> ");
    scanf("%c", &sexo);
    
    printf("Informe a altura: \n\t\t >>> ");
    scanf("%f", &altura);
    
    system("CLS");

    if((sexo=='F') || (sexo=='f')){
        peso = (62.1 * altura) - 44.7;
    }
    else
    {
        peso = (72.7 * altura) - 58;
        }
 
    printf("\nO sexo eh: \n\t\t >>> %c", sexo);
    printf("\nA altura eh: \n\t\t >>> %f", altura);
    printf("\nO peso ideal eh: \n\t\t >>> %f", peso);

    return 0;
}