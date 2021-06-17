//Unidade I
//Exercicio 2 - Na prática
//Escreva um programa que leia o nome de uma pessoa e imprima a seguinte mensagem, na tela: “Bem-vindo(a) à disciplina de Algoritmos e Lógica de Programação II, <nome>”; 
//onde o campo <nome> deve ser substituído pelo nome informado pelo usuário.
#include <stdio.h>

int main(){
    char nome[50];

    printf("Qual o seu nome? \n\t\t >>> ");
    scanf("%s", &nome);
    printf("Bem-vindo(a) a disciplina de Algoritmos e Logica de Programacao II, %s!!", nome);
    return 0;
}