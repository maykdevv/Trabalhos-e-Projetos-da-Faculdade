#include <stdio.h>
int main()

{
    /* UESTÃO 02: Faça um programa que exiba  todos os elementos da seguinte série, assim  como a soma destes elementos: 
1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1  */

    int i, sub = 50;


    for (i = 1; i <= 50; i++)
    {
        printf("%d, ", i);
        printf("%d, ", sub--);
    }
    
    return 0;
}
