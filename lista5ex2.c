#include <stdio.h>
int main()
{

int i, n, soma = 0;

printf("insira um numero inteiro: ");
scanf("%d", &n);

for (i=0;i<=n;i++) {
    soma += i;
}
printf("soma dos numeros: %d", soma);
}
