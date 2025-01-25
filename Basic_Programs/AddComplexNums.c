/*
Author: https://github.com/ravikumark815
AddComplexNums.c : Adds two complex numbers
*/
#include <stdio.h>

typedef struct complex {
    int real;
    int imag;
} complex;

int main()
{
    complex a, b;
    
    printf("Enter real and imaginary parts of first number separated by space: ");
    scanf("%d %d", &a.real, &a.imag);

    printf("Enter real and imaginary parts of second number separated by space: ");
    scanf("%d %d", &b.real, &b.imag);

    printf("Sum of (%d+%di) and (%d+%di): (%d+%di)\n", a.real, a.imag, b.real, b.imag, (a.real+b.real), (a.imag + b.imag));
    return 0;
}