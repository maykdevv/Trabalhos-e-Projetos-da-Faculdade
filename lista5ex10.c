#include <stdio.h>
#include <ctype.h>

int main()
{
int i, quantidadefeminina = 0, quantidadehomem = 0;
double altura, maioralt = 0, menoralt = 10, mediafeminina = 0, media = 0, porcentagem;
char genero;

const int QUAD = 4; //declarando uma constante

for (i=0;i<QUAD;i++) {

    printf("insira o genero: "); //inseriindo o genero da pessoa
    fflush (stdin);
    scanf("%c", &genero);
    genero = toupper (genero);

    printf("insira a altura: "); //inserindo a altura da pessoa
    scanf("%lf", &altura);

    if (altura > maioralt) {
        maioralt = altura;
    }                           //testando e atribuindo a maior e a menor altura de todas que forem inseridas
    
    if (altura < menoralt) {
        menoralt = altura;
    }


    if (genero == 'F') {        //fazendo a media da altura feminina
        mediafeminina = mediafeminina + altura;    
        quantidadefeminina++;    
    } 
    if (genero == 'M') {
        quantidadehomem++;      //aumentando um contador pro genero masculino
    }
    
}

if (quantidadefeminina > 0) {                   //testando se é maior q zero pra evitar divisao por zero
    media = mediafeminina / quantidadefeminina;
}

porcentagem = (((double)quantidadehomem / QUAD) * 100);

printf("maior altura encontrada: %.2lf\n", maioralt);             //exibindo as informaçoes desejadas (maior e menor altura,
printf("menor altura encontrada: %.2lf\n", menoralt);             //media feminina e porcentagem de homens)*/
printf("media da altura feminina: %.2lf\n", media);
printf("percentual de homens na pesquisa: %.2lf%%\n", porcentagem);

}