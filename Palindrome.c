/*

Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.

For example, 121 is a palindrome while 123 is not.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

*/
#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int num);
int main()
{
    printf("%d\n", isPalindrome(110));
    return 0;
}
bool isPalindrome(int num)
{
    int rem = 0, rev = 0;
    int orig_num = num;
    while(num)
    {
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    if (rev == orig_num)
        return 1;
    return 0;
}