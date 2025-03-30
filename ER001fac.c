#include <stdio.h>


int main()
{
    //QUESTÃO 01: Faça um programa que leia um  número inteiro positivo N e exiba todos os  múltiplos de Y inferiores a N, onde N e Y são  fornecidos pelo usuário. 
    int num1, num2, i, multiplos = 0;

    printf("insira um numero inteiro valido: ");
    scanf("%d", &num1);
    printf("insira um numero pra pegar os multiplos inferiores ao numero anterior: ");
    scanf("%d", &num2);

    for (i=0;multiplos < num1;i++) {
        multiplos = num2 * i ;
        printf("%d\n", multiplos);
    }

    return 0;
}
