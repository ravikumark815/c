/*
Author: https://github.com/ravikumark815
PrintNPrimeNums.c : Prints Prime Numbers from 1 to n
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n)
{
    if (n==0 || n==1)
        return false;
    
    for (int i=2; i<=sqrt(n); i++) {
        if ((n % i) == 0)
            return false;
    }
    return true;
}

int main()
{
    int N;
    
    printf("Enter value of N: ");
    scanf("%d", &N);
    for (int i=1; i<N; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}