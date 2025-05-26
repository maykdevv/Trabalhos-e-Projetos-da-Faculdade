#include <stdio.h>
// Implementar uma função que converta
// determinada temperatura em graus Celsius
// para graus Fahrenheit.



double conversor(double n) {
    double grauconvertido;
    grauconvertido = (n * 1.8) + 32;        //funçao que converte os graus em celsius para farenheit
    return grauconvertido;
}

int main()
{

    double grausC;
    printf("insira um numero pra converter: ");
    scanf("%lf", &grausC);
    
    printf("a temperatura %.1lfC equivale a %.1lfF. ", grausC, conversor(grausC));

}
