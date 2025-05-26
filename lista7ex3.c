#include<stdio.h>

int main () {
//     QUESTÃO 03: Faça um programa que exiba
// na tela as tabuadas dos números de 1 a 9,
// como descrito a seguir:

int i, a = 0;

for (i = 0; i < 9; i++) 
{
        while (a <= 9){
        printf("%d x %d = %d    ", a, i, (a * i)); //logica do codigo: enquanto A for menor que nove, incia um ciclo que printa 
        a++;                                       //da esquerda pra direita ate o fim, dps pula a linha e repete ate encher o saco
    }
    printf("\n");
    a = 0;
}

}