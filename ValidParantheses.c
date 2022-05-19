/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
 
Test: "))", "){", "()

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct {
    int curlen;
    int max;
    char *val;
} Stack;

int push(Stack* s, char val)
{
    if (s->curlen == s->max) {
        s->max *= 2;
        s->val = realloc(s->val, s->max);
    }
    return 0;
}

unsigned char pop(Stack* s)
{
    return s->val[--s->curlen];
}

bool isValid(char * c)
{
    enum
    { Paren
    , Brace
    , Brack };
    
    Stack s = { .max = 16, .val = malloc(16) };
    bool valid = false;
    
    while (*c) 
    { 
        switch (*c++) 
        {
            case '(': push(&s, Paren); break;
            case '{': push(&s, Brace); break;
            case '[': push(&s, Brack); break;
            case ')': if (!s.curlen || pop(&s) != Paren) goto Free; break;
            case '}': if (!s.curlen || pop(&s) != Brace) goto Free; break;
            case ']': if (!s.curlen || pop(&s) != Brack) goto Free; break;
        } 
    }
    valid = !s.curlen;
    Free: free(s.val);
    return valid;
}

int main()
{
    int n = 5;
    char *strs[5] = {"\0"};

    strs[0]="()\t\tTrue";
    strs[1]="()[]{}\tTrue";
    strs[2]="(]\t\tFalse";
    strs[3]="))\t\tFalse";
    strs[4]="){\t\tFalse";
    
    for (int i=0; i<n; i++)
    {
        printf("Test:%s\tGot:%s\n", strs[i], isValid(strs[i])? "True" : "False");
    }
    
    return 0;
}