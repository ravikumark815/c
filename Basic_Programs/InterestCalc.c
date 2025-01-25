/*
Author: https://github.com/ravikumark815
InterestCalc.c : Calculates Simple and Compound Interest
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float P, R;
    int T;
    printf("Enter Principal: "); scanf("%f", &P);
    printf("Enter Rate of Interest: "); scanf("%f", &R);
    printf("Enter Time Period (Years): "); scanf("%d", &T);

    printf("Simple Interest: %0.2f\n",((P*T*R))/100.00);
    printf("Compound Interest: %0.2f\n",(P * (pow((1 + (R/100)), T))));
    
    return 0;
}