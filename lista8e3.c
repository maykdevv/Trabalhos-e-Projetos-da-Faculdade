#include <stdio.h>

int fibonacci(int n) {
    if (n == 1) return 0; // Primeiro termo, uso return pra ja terminar a funcao de uma vez se for um desses dois
    if (n == 2) return 1; // Segundo termo

    int anterior = 0;   // Representa fibonacci(1)
    int atual = 1;      // Representa fibonacci(2)
    int proximo;

    for (int i = 3; i <= n; i++) {
        proximo = anterior + atual; // Calcula o próximo termo
        anterior = atual;          // Atualiza o termo anterior
        atual = proximo;           // Atualiza o termo atual
    }

    return atual;
}

int main() {
    int n;

    printf("Digite um valor maior que zero: ");
    scanf("%d", &n);

    printf("O termo %d eh: %d\n", n, fibonacci(n));

    return 0;
}