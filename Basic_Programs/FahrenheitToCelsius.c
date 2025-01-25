/*
Author: https://github.com/ravikumark815
FahrenheitToCelsius.c : Convert Fahrenheit to Celsius
*/

#include <stdio.h>

float convertFahrenheitToCelsius (int num)
{
    return (((num - 32) * 5) / 9.0);
}

int main ()
{
    int f;
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%d", &f);
    printf("Temperature in Celsius: %0.2f\n", convertFahrenheitToCelsius(f));
    
    return 0;
}