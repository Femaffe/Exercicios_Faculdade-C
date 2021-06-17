//Exercicio unidade II
//Elabore um programa que receba o salário de um funcionário e o código do cargo e apresente o cargo, o valor do aumento e o novo salário. A tabela a seguir apresenta os cargos.
//Codigo 1 - Cargo Servente             - Percentual de aumento 40%
//Codigo 2 - Cargo Pedreiro             - Percentual de aumento 35%
//Codigo 3 - Cargo Mestre de Obras      - Percentual de aumento 20%
//Codigo 4 - Cargo Tecnico de segurança - Percentual de aumento 10%
#include <stdio.h>
#include <stdlib.h>

int main(){

    int opcao;
    float salario, novoSalario, aumento;
  
    printf(">>>> 1 <<<< SERVENTE\n");
    printf(">>>> 2 <<<< PEDREIRO\n");
    printf(">>>> 3 <<<< MESTRE DE OBRAS\n");
    printf(">>>> 4 <<<< TECNICO DE SEGURANCA\n");
    printf("\nPor favor, informe sua profissao: \n\t\t >>> ");
    scanf("%d", &opcao);

    printf("Informe seu salario atual: \n\t\t >>> ");
    scanf("%f", &salario);

    system("CLS");

    switch (opcao)
    {
    case 1:
        aumento = salario * 0.4;
        novoSalario = salario + aumento;
        printf("\n\t\t >>> CARGO SERVENTE");
        printf("\n\t\t >>> VOCE RECEBEU 40%% DE AUMENTO");
        printf("\n\t\t >>> SEU NOVO SALARIO EH DE %.2f\n\n\n\n\n", novoSalario);
        break;
    
    case 2:
        aumento = salario * 0.35;
        novoSalario = salario + aumento;
        printf("\n\t\t >>> CARGO PEDREIRO");
        printf("\n\t\t >>> VOCE RECEBEU 35%% DE AUMENTO");
        printf("\n\t\t >>> SEU NOVO SALARIO EH DE %.2f\n\n\n\n\n", novoSalario);
        break;
    
    case 3:
        aumento = salario * 0.2;
        novoSalario = salario + aumento;
        printf("\n\t\t >>> CARGO MESTRE DE OBRAS");
        printf("\n\t\t >>> VOCE RECEBEU 20%% DE AUMENTO");
        printf("\n\t\t >>> SEU NOVO SALARIO EH DE %.2f\n\n\n\n\n", novoSalario);
        break;
    
    case 4:
        aumento = salario * 0.1;
        novoSalario = salario + aumento;
        printf("\n\t\t >>> CARGO TECNICO DE SEGURANCA");
        printf("\n\t\t >>> VOCE RECEBEU 10%% DE AUMENTO");
        printf("\n\t\t >>> SEU NOVO SALARIO EH DE %.2f\n\n\n\n\n", novoSalario);
        break;
    
    default:
        printf("Por favor, informe a opcao correta");
        break;
    }

    return 0;
}