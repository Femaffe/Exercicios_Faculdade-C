//Exercicio unidade II
//Faça um programa que receba o código do estado de origem da carga de um caminhão, o peso da carga em toneladas e o código dela.
//Codigo 1 - Cargo 20
//Codigo 2 - Cargo 15
//Codigo 3 - Cargo 10
//Codigo 4 - Cargo  5
//Codigo da carga 10 a 20 - Preço por quilo 180
//Codigo da carga 21 a 30 - Preço por quilo 120
//Codigo da carga 31 a 40 - Preço por quilo 230



//////TEM ALGUM ERRO!!!!



#include <stdio.h>
#include <stdlib.h>

int main(){

    int codEstado, peso, codCarga;
    float imposto, taxaImp, preco, precoQuilo;
    float total;    
    
    printf("\nPor favor, digite o codigo do estado: \n\t\t >>> ");
    scanf("%d", &codEstado);
    printf("\nPor favor, digite o peso da carga em toneladas: \n\t\t >>> ");
    scanf("%d", &peso);
    printf("Digite o codigo da carga: \n\t\t >>> ");
    scanf("%f", &codCarga);

    system("CLS");

    switch (codEstado)
    {
    case 1:
        taxaImp = 0.2;
        break;
    
    case 2:
        taxaImp = 0.15;
        break;
    
    case 3:
        taxaImp = 0.1;
        break;
    
    case 4:
        taxaImp = 0.05;
        break;
    
    default:
        printf("Codigo de estado invalido");
        break;
    }

    if(codCarga >= 10 && codCarga <= 20)
    {
        precoQuilo = 180;
    }
    else if (codCarga >= 21 && codCarga <= 30)
    {
        precoQuilo = 120;
    }
    else if (codCarga >= 31 && codCarga <= 40)
    {
        precoQuilo = 230;
    }
    else{
        printf("Codigo de carga invalido");
    }

    imposto = peso * 1000 * precoQuilo * taxaImp;
    preco = peso * 1000 * precoQuilo;
    total = preco + imposto;

    printf("Peso em kg: %d\nPreco: %.2f\nImposto:%.2f\nTotal: %.2f\n", peso*1000, preco, imposto, total);
    
            
    
    





    return 0;
}