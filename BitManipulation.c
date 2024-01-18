/*
Author: https://github.com/ravikumark815

------- Bit Manipulation -------
Common bit manipulation tricks in C
*/
#include <stdio.h>
#include <stdlib.h>

// Function to convert decimal to binary
void decimalToBinary(int num) {
    int binary[32];
    int index = 0;
    int decimal = num;

    while (decimal > 0) {
        binary[index++] = decimal % 2;
        decimal = decimal / 2;
    }

    printf("Binary[%d]: ", num);
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

// Function to convert binary to decimal
void binaryToDecimal(long long num) {
    int decimal = 0, base = 1, remainder;
    long long binary = num;

    while (binary > 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }

    printf("Decimal[%llu]: %d\n", num, decimal);
}

void main()
{
    int num = 156;
    long long bin_num = 10011100;
    
    decimalToBinary(num);
    binaryToDecimal(bin_num);

    return;
}