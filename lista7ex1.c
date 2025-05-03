#include<stdio.h>

int main () {
/*esse aqui é o exercicio de olhar o codigo e ver oq acontece da lista 7, so ta aqui pra verificar e ta comentado pra facilitar a vida*/



//     Dado o programa abaixo,
// fornecer os valores que serão exibidos
// quando o mesmo for executado:

    int A, B, C, i;

    A = 0;  //inicia A com zero 
    B = 10;  //inicia B com 10
    C = B - A;  //incia C com B-a(10-0=10)
    i = 1; //inicia i com 1 

    while (i <= 10) {

        if (C > A) //testa se B-A=algo maior que A, inicio (10-0=10 e 10 > 0)
        {
            C = C - 2; //C diminui 2 do proprio valor
            i++;
        }
        else
        {
            i += 2; //i aumenta em 2
            B = C % i; //b recebe o resto da divisao entre c e i
        }

        A = A + i;

        printf ("A = %d\n", A);
        printf ("B = %d\n", B);
        printf ("C = %d\n", C);
        printf ("i =%d\n", i);
    }
}

