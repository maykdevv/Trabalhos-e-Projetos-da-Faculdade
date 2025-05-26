// Desenvolver uma função que exiba os múltiplos
// de N compreendidos no intervalo definido por
// A e B.

#include <stdio.h>
//tipo de retorno __ nome __ (parametros)
//void(vazio) no tipo caso n retorne porra nenhuma


void multiplosN(int n, int a, int b) { 
                                        //aqui eu declaro a funcao com void pq eu n retorno nada. quando for retornar preciso botar o tipo do retorno
                                        //(ex: quero retornar uma variavel de media, declara como [float Media()] e no fim do 
                                        //codigo da funcao coloco return (a variavel usada pra guardar a media) [return Media;]. )

    int i, encontrou = 0;
    for (i = a; i <= b; i++) {
        if (i % n == 0) {           //criando a funçao que printa todos os multiplos do intervalo, funciona com um loop incrementando i 
            printf("%d ", i);       //e printando caso seja multiplo (resto 0), e guarda um contador pra poder exibir depois caso nao ache nada
            encontrou = 1;          
        }
    }
    
    if (encontrou == 0) {
        printf("Nenhum múltiplo encontrado."); //o ideal seriam todos os prints fora da funçao tbm mas se fizer assim 
    }                                          //vai dar mais trabalho e eu to com preguiça :)
}

int main() {

    int n, a, b;
    printf("Insira o valor de N: ");
    scanf("%d", &n);                // tudo que o usuario insere deve ser fora da funçao
    printf("Insira o intervalo desejado [x y]: ");
    scanf("%d %d", &a, &b);
    
    multiplosN(n, a, b); //chamando a funcao criada
}

