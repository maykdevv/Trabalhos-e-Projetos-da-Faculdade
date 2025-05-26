#include <stdio.h>
//ex 2 da lista 5 de fac
int somaN(int n) 
{ 
    int i, soma = 0;

    for (i=0;i<=n;i++) {
        soma += i;
    }
    return soma;

}

int main()
{


    // Desenvolver um programa que calcule a
    // soma dos números de 1 a N, sendo N um
    // número inteiro fornecido pelo usuário.

    int numero;
    printf("insira um numero inteiro: ");
    scanf("%d", &numero);

    somaN(numero);

    printf("soma dos numeros: %d", somaN(numero));
    
    //soma todos os inteiros de 1 ate N e retorna o valor
    //prof explicou que é melhor que os dados inseridos pelo usuario sejam postos
    //antes ou depois da funçao, nao dentro dela.
    //aqui a leitura foi antes e a exibiçao depois, imagino que a maioria das vezes va ser assim mesmo.
}


