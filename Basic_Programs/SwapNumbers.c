/*
Author: https://github.com/ravikumark815
SwapNumbers.c : Swaps values of two integer variables
*/

#include <stdio.h>

int swap(int *a, int *b) 
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

    return 0;
}

int main()
{
    int a, b;
    
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("After Swapping:\na: %d, b: %d\n", a , b);
    
    return 0;
}