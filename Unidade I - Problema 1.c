//Exercicio unidade I
//Escreva um programa que leia um número inteiro e apresente seu antecessor e seu sucessor
#include <stdio.h>

int main(){

    int numero, sucessor, antecessor;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    sucessor = numero + 1;
    antecessor = numero - 1;

    printf("\nVoce digitou o numero: %d", numero);
    printf("\nO sucessor do numero digitado eh %d", sucessor);
    printf("\nO antecessor do numero digitado eh %d", antecessor);
    return 0;

    //Tbem podemos escrever assim de forma resumida
    //printf(“Digite o número: “);
    //scanf (“%d”, &num);
    //printf(“\n O antecessor é: %d”, num-1);
    //printf(“\n O sucessor é: %d”, num+1);
 }
