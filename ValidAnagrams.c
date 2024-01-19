/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false
 

Constraints:
1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int str_cmp(const void *a, const void *b) {
    return (*(char *) a - *(char *)b);
}

void isAnagram(char* s, char* t) {
    qsort(s, strlen(s), sizeof(char), str_cmp);
    qsort(t, strlen(t), sizeof(char), str_cmp);

    if (strcmp(s, t) == 0) printf(">> Anagrams!\n");
    else printf (">> Not an Anagram\n");
    return;
}

void main()
{
    char s[] = "anagram";
    char t[] = "nagaram";

    isAnagram(s, t);
    return;
}