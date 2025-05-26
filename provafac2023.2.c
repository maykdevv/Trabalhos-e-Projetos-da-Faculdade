#include <stdio.h>

int main() {
    int n, potencia = 1;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for (int linha = 1; linha <= n; linha++) {
        // Espaços para centralizar (3 espaços por nível)
        for (int espaco = 1; espaco <= 2 * (n - linha); espaco++) {
            printf("   ");
        }

        // Imprime a potência de 2 (2*linha - 1 vezes)
        for (int j = 1; j <= 2 * linha - 1; j++) {
            printf("%2d  ", potencia);
        }

        printf("\n");
        potencia *= 2; // Atualiza para a próxima potência (2^linha)
    }
    
    return 0;
}