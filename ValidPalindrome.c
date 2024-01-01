/*
Author: https://github.com/ravikumark815

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

Example 2:
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

Example 3:
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
 
Constraints:
1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.
*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

bool ispalindrome(char*s)
{
	int i=0, j=strlen(s)-1;
	
	while(i<j) {
		if (!isalnum(s[i])) i++;
		else if (!isalnum(s[j])) j--;
		else if (tolower(s[i]) != tolower(s[j])) return false;
		else {i++; j--;}
	}
	return true;
}

void main()
{
	char str1[]  = "A man, a plan, a canal: Panama"; 
	char str2[]  = "race a car"; 
	char str3[]  = " "; 

	printf("%s\n", ispalindrome(str1) ? "true" : "false");
	printf("%s\n", ispalindrome(str2) ? "true" : "false");
	printf("%s\n", ispalindrome(str3) ? "true" : "false");

	return;
}
