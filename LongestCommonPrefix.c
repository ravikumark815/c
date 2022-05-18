/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lower-case English letters.
*/

#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize){
    if(strsSize==0)
    {
        return "";
    }

    if(strsSize==1)
    {
        return strs[0];
    }

    for(int i=1;i<strsSize;i++){
        for(int j=0;strs[0][j]!='\0';j++){
            if(strs[i][j]!=strs[0][j])
            {
                strs[0][j]='\0';
                if(j==0)
                {
                    return "";
                }
                break;
            }
        }
    }
    return strs[0];
}

int main(){
    int strsSize = 3;
    char *strs[3] = {"\0"};
    strs[0]="flower";
    strs[1]="flow";
    strs[2]="flight";
    longestCommonPrefix(strs, strsSize);
    return 0;
}