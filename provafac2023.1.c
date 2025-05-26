#include <stdio.h>

int main() {
    int dia1, dia2, mes1, mes2, ano1, ano2, diffano, diffmes, diffdia, quantidade;

    printf("Insira a primeira data: [DD MM AAAA] ");
    scanf("%d %d %d", &dia1, &mes1, &ano1);

    printf("Insira a segunda data: [DD MM AAAA] ");
    scanf("%d %d %d", &dia2, &mes2, &ano2);

    // Diferença de anos e (total de dias)
    diffano = (ano2 - ano1) * 360;

    // Diferença de meses (mes2 - mes1, mesmo que negativo)
    diffmes = (mes2 - mes1) * 30;

    // Diferença de dias
    diffdia = dia2 - dia1;

    // Soma tudo (meses negativos são compensados naturalmente)
    quantidade = diffano + diffmes + diffdia;

    printf("A diferença de dias entre as duas datas é: %d\n", quantidade);

    return 0;
}