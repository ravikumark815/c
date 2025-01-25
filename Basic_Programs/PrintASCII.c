/*
Author: https://github.com/ravikumark815
PrintAscii.c : Prints Ascii value of the given char
*/

#include <stdio.h>

int main()
{
    char a;
    
    printf("Enter the character: ");
    scanf("%c",&a);
    printf("ASCII value of %c: %d\n", a, a);
    
    return 0;
}