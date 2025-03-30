#include <stdio.h>


int main()
{
    //QUESTÃO 05: Faça um programa que exiba  na tela os 50 primeiros termos da seguinte  série: 1, -2, 3, -4, 5, -6 ... 
    int i, par;
    for (i = 1; i <= 50; i++)
    {
        if (i % 2 == 0) {
            par = i * -1;
            printf("%d, ", par);
        }
        else {
            printf("%d, ", i);
        }
    }
    
    return 0;
}
