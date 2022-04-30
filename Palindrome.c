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
#include <string.h>

bool isPalindrome(int num);
bool isPalindromeStr(int num);
int main()
{
    int num = 12121;
    printf("%d\n", isPalindrome(num));
    printf("%d\n", isPalindromeStr(num));
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
        return true;
    return false;
}

bool isPalindromeStr(int num)
{
    char num_str[12];
    sprintf(num_str, "%d", num);
    int left = 0, right = (strlen(num_str) - 1);

    while (left < right)
    {
        if (num_str[left] != num_str[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}