#include <stdio.h>
#include <math.h>

int main()

{
    char figura;
    double area, raio, base, altura;

    printf("escolha a figura desejada; (C)irculo, (R)etangulo, (Q)uadrado ou (T)riangulo: ");
    scanf("%c", &figura);

    if ((figura == 'c'))
    {

        printf("Qual o raio do circulo? ");
        scanf("%lf", &raio);
        area = (3.14159 * (raio * raio));
        printf("a area do circulo é: %.4lf\n", area);
    }

    else if ((figura == 'r'))
    {
        printf("Insira a base do retangulo: ");
        scanf("%lf", &base);
        printf("Insira a altura do retangulo: ");
        scanf("%lf", &altura);
        area = base * altura;
        printf("a area do retangulo é: %.4lf\n", area);
    }
    else if ((figura == 'q'))
    {
        printf("Insira o lado do quadrado:");
        scanf("%lf", &altura);
        area = altura * altura;
        printf("a area do quadrado é: %.4lf\n", area);
    }

    else if ((figura == 't'))
    {
        printf("insira a base do triangulo: ");
        scanf("%lf", &base);
        printf("insira a altura do triangulo: ");
        scanf("%lf", &altura);
        area = (base * altura) / 2;
        printf("a area do triangulo é: %.4lf\n", area);
    }
    return 0;
}
