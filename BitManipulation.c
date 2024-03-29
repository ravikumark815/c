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

// Function to check number is odd or even
void oddEven(int num)
{
    if (num & 1) printf(">> Odd Number: %d\n", num);
    else printf(">> Even Number: %d\n", num);
    
    return;
}

void divideby2(int num)
{
    printf(">> Divide by two[%d]: %d\n", num, num>>1);
    return;
}
void multiplyby2(int num)
{
    printf(">> Multiply by two[%d]: %d\n", num, num<<1);
    return;
}

void lowerCase(char ch)
{
    printf(">> lowerCase(%c): %c\n", ch, ch | 32);
    return;
}
void upperCase(char ch)
{
    printf(">> upperCase(%c): %c\n", ch, ch & ~32);
    return;
}

// Function to clear the lowest set bit
void clearLowestSetBit(int num)
{
    int res = num & (num - 1);
    printf(">> clearLowestSetBit:\n");
    printf("Before -");
    decimalToBinary(num);
    printf("After  -");
    decimalToBinary(res);
    
    return;
}

// Function to extract lowest set bit
void lowestSetBit(int num)
{
    int res = num & (~(num-1));
    printf(">> lowestSetBit:\n");

    printf("Original: %d ", num);
    decimalToBinary(num);
    printf("Lowest Set Bit: %d ", res);
    decimalToBinary(res);

    return;
}

void powOf2(int num)
{
    // if num = 0
    if (!num) {
        return;
    }

    if (num & (num-1)) {
        printf(">> %d: Not a power of 2\n", num);
        return;
    }

    printf(">> %d: Power of 2\n", num);
    return;
}

void setKthBit(int num, int k)
{
    printf(">> Set Kth Bit: \n");
    decimalToBinary(num);
    num = num | (1<<k);
    decimalToBinary(num);
    return;
}

void unsetKthBit(int num, int k)
{
    printf(">> Unset Kth Bit: \n");
    decimalToBinary(num);
    num = num & ~(1<<k);
    decimalToBinary(num);
    return;
}

void checkKthBit(int num, int k)
{
    printf(">> Check Kth Bit: \n");
    decimalToBinary(num);
    if (num & (1<<k)) printf("%d bit is Set\n", k);
    else printf("%d bit is Not set\n", k);
    return;
}

void toggleKthBit(int num, int k)
{
    printf(">> Toggle Kth Bit: \n");
    decimalToBinary(num);
    num = num ^ (1<<k);
    decimalToBinary(num);
    return;
}

void main()
{
    int num = 156;
    long long bin_num = 10011100;
    
    decimalToBinary(num);
    binaryToDecimal(bin_num);
    oddEven(16384);
    oddEven(2367);
    clearLowestSetBit(156);
    lowestSetBit(12);
    divideby2(16384);
    multiplyby2(8192);
    lowerCase('A');
    upperCase('b');
    powOf2(0);
    powOf2(156);
    powOf2(65536);
    setKthBit(156, 5);
    unsetKthBit(188, 5);
    checkKthBit(189, 5);
    toggleKthBit(156, 5);

    return;
}