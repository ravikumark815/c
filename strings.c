#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Programming is fun.";

    // stpcpy
    char dest1[20], dest2[20];
    char* copied1 = stpcpy(dest1, str1);
    char* copied2 = stpcpy(dest2, str2);
    printf("stpcpy1: %s\n", copied1);
    printf("stpcpy2: %s\n", copied2);

    /*
    strcasecmp
    Syntax: int strcasecmp(const char *str1, const char *str2);
    Purpose: The strcasecmp() function compares two strings ignoring the case.
    Return Value: Returns an integer less than, equal to, or greater than zero if str1
       is found, respectively, to be less than, to match, or be greater than str2.

    Example Output:
    strcasecmp: -3
    */
    int cmp_result = strcasecmp(str1, str2);
    printf("strcasecmp: %d\n", cmp_result);

    /*
    strcat
    Syntax: char *strcat(char *dest, const char *src);
    Purpose: The strcat() function appends the src string to the dest string, overwriting
       the terminating null byte ('\0') at the end of dest, and then adds a terminating null byte.
    Return Value: The strcat() function returns a pointer to the resulting string dest.

    Example Output:
    strcat1: Hello, World! How are you?
    strcat2: Programming is fun. Enjoy coding!
    */
    char dest3[30], dest4[30];
    strcat(dest3, str1);
    strcat(dest4, str2);
    printf("strcat1: %s\n", dest3);
    printf("strcat2: %s\n", dest4);

    /*
    strchr
    Syntax: char *strchr(const char *str, int character);
    Purpose: The strchr() function returns a pointer to the first occurrence of the character
       in the given string.
    Return Value: Returns a pointer to the matched character or NULL if the character is not found.

    Example Output:
    strchr1: World!
    strchr2: u is fun.
    */
    char* char_found1 = strchr(str1, 'W');
    char* char_found2 = strchr(str2, 'u');
    printf("strchr1: %s\n", char_found1);
    printf("strchr2: %s\n", char_found2);

    /*
    strcmp
    Syntax: int strcmp(const char *str1, const char *str2);
    Purpose: The strcmp() function compares two strings lexicographically.
    Return Value: Returns an integer less than, equal to, or greater than zero if str1
       is found, respectively, to be less than, to match, or be greater than str2.

    Example Output:
    strcmp: 3
    */
    int cmp_result2 = strcmp(str1, str2);
    printf("strcmp: %d\n", cmp_result2);

    /*
    strcoll
    Syntax: int strcoll(const char *str1, const char *str2);
    Purpose: The strcoll() function compares two strings according to the current
       locale as defined in the program's locale.
    Return Value: Returns an integer less than, equal to, or greater than zero if str1
       is found, respectively, to be less than, to match, or be greater than str2.

    Example Output:
    strcoll: -3
    */
    int coll_result = strcoll(str1, str2);
    printf("strcoll: %d\n", coll_result);

    /*
    strcpy
    Syntax: char *strcpy(char *dest, const char *src);
    Purpose: The strcpy() function copies the source string to the destination string,
       including the terminating null byte.
    Return Value: Returns a pointer to the destination string dest.

    Example Output:
    strcpy1: Hello, World!
    strcpy2: Programming is fun.
    */
    char copy_dest1[20], copy_dest2[20];
    strcpy(copy_dest1, str1);
    strcpy(copy_dest2, str2);
    printf("strcpy1: %s\n", copy_dest1);
    printf("strcpy2: %s\n", copy_dest2);

    /*
    strcspn
    Syntax: size_t strcspn(const char *str1, const char *str2);
    Purpose: The strcspn() function calculates the length of the initial segment
       of str1 that consists of characters not in str2.
    Return Value: Returns the length of the segment.

    Example Output:
    strcspn1: 5
    strcspn2: 12
    */
    size_t cspn_result1 = strcspn(str1, "o");
    size_t cspn_result2 = strcspn(str2, "g");
    printf("strcspn1: %zu\n", cspn_result1);
    printf("strcspn2: %zu\n", cspn_result2);

    /*
    strdup
    Syntax: char *strdup(const char *str);
    Purpose: The strdup() function duplicates the given string by allocating
       memory using malloc and returns a pointer to it.
    Return Value: Returns a pointer to the duplicated string.

    Example Output:
    strdup1: Hello, World!
    strdup2: Programming is fun.
    */
    char* dup1 = strdup(str1);
    char* dup2 = strdup(str2);
    printf("strdup1: %s\n", dup1);
    printf("strdup2: %s\n", dup2);
    free(dup1);
    free(dup2);

    /*
    strfry
    Syntax: char *strfry(char *str);
    Purpose: The strfry() function is not applicable to all systems. It may
       randomize the order of characters in the given string.
    Return Value: Returns a pointer to the randomized string.

    Example Output: (Platform-dependent)
    strfry1: Randomized output
    strfry2: Randomized output
    */
    // Not applicable to all systems
    // char* fry1 = strfry(str1);
    // char* fry2 = strfry(str2);
    // printf("strfry1: %s\n", fry1);
    // printf("strfry2: %s\n", fry2);

    /*
    strlen
    Syntax: size_t strlen(const char *str);
    Purpose: The strlen() function calculates the length of the given string
       excluding the terminating null byte.
    Return Value: Returns the length of the string.

    Example Output:
    strlen1: 13
    strlen2: 18
    */
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    printf("strlen1: %zu\n", len1);
    printf("strlen2: %zu\n", len2);

    /*
    strncat
    Syntax: char *strncat(char *dest, const char *src, size_t n);
    Purpose: The strncat() function appends up to n characters from the src string
       to the dest string, overwriting the null byte ('\0') at the end of dest,
       and then adds a terminating null byte.
    Return Value: Returns a pointer to the resulting string dest.

    Example Output:
    strncat1: Hello, World! How
    strncat2: Programming is fun. Enjoy co
    */
    char ncat_dest1[30], ncat_dest2[30];
    strncat(ncat_dest1, str1, 7);
    strncat(ncat_dest2, str2, 12);
    printf("strncat1: %s\n", ncat_dest1);
    printf("strncat2: %s\n", ncat_dest2);

    /*
    strncmp
    Syntax: int strncmp(const char *str1, const char *str2, size_t n);
    Purpose: The strncmp() function compares up to the first n characters of two strings
       lexicographically.
    Return Value: Returns an integer less than, equal to, or greater than zero if the substring
       of str1 is found, respectively, to be less than, to match, or be greater than str2.

    Example Output:
    strncmp: 3
    */
    int ncmp_result = strncmp(str1, str2, 5);
    printf("strncmp: %d\n", ncmp_result);

    /*
    strncpy
    Syntax: char *strncpy(char *dest, const char *src, size_t n);
    Purpose: The strncpy() function copies up to n characters from the src string to the dest
       string, including the null byte ('\0') at the end if the src string is less than n.
    Return Value: Returns a pointer to the destination string dest.

    Example Output:
    strncpy1: Hello
    strncpy2: Programming
    */
    char ncopy_dest1[20], ncopy_dest2[20];
    strncpy(ncopy_dest1, str1, 5);
    strncpy(ncopy_dest2, str2, 10);
    printf("strncpy1: %s\n", ncopy_dest1);
    printf("strncpy2: %s\n", ncopy_dest2);

    /*
    strncasecmp
    Syntax: int strncasecmp(const char *str1, const char *str2, size_t n);
    Purpose: The strncasecmp() function compares up to the first n characters of two strings
       ignoring the case.
    Return Value: Returns an integer less than, equal to, or greater than zero if the substring
       of str1 is found, respectively, to be less than, to match, or be greater than str2.

    Example Output:
    strncasecmp: -3
    */
    int cmp_result4 = strncasecmp(str1, str2, 5);
    printf("strncasecmp: %d\n", cmp_result4);

    /*
    strpbrk
    Syntax: char *strpbrk(const char *str1, const char *str2);
    Purpose: The strpbrk() function searches str1 for any character in str2.
    Return Value: Returns a pointer to the first occurrence in str1 of any character in str2,
       or a null pointer if no match is found.

    Example Output:
    strpbrk1: o, World!
    strpbrk2: is fun.
    */
    char* pbrk_result1 = strpbrk(str1, "oW");
    char* pbrk_result2 = strpbrk(str2, "oP");
    printf("strpbrk1: %s\n", pbrk_result1);
    printf("strpbrk2: %s\n", pbrk_result2);

    /*
    strrchr
    Syntax: char *strrchr(const char *str, int character);
    Purpose: The strrchr() function returns a pointer to the last occurrence of the character
       in the given string.
    Return Value: Returns a pointer to the matched character or NULL if the character is not found.

    Example Output:
    strrchr1: old!
    strrchr2: ming is fun.
    */
    char* rchr_result1 = strrchr(str1, 'o');
    char* rchr_result2 = strrchr(str2, 'g');
    printf("strrchr1: %s\n", rchr_result1);
    printf("strrchr2: %s\n", rchr_result2);

    /*
    strsep
    Syntax: char *strsep(char **stringp, const char *delim);
    Purpose: The strsep() function tokenizes a string by successive calls, returning pointers
       to the next token in *stringp, using the delimiter specified in delim.
    Return Value: Returns a pointer to the token found, or NULL if no token is found.

    Example Output:
    strsep1: Hello
    strsep2: Programming
    */
    char* token1 = strtok(str1, ",");
    char* token2 = strtok(str2, " ");
    printf("strsep1: %s\n", token1);
    printf("strsep2: %s\n", token2);

    /*
    strspn
    Syntax: size_t strspn(const char *str1, const char *str2);
    Purpose: The strspn() function calculates the length of the initial segment
       of str1 consisting of only characters in str2.
    Return Value: Returns the length of the segment.

    Example Output:
    strspn1: 13
    strspn2: 11
    */
    size_t spn_result1 = strspn(str1, "Helo, Wrd!");
    size_t spn_result2 = strspn(str2, "Prgamig");
    printf("strspn1: %zu\n", spn_result1);
    printf("strspn2: %zu\n", spn_result2);

    /*
    strstr
    Syntax: char *strstr(const char *haystack, const char *needle);
    Purpose: The strstr() function finds the first occurrence of the substring needle
       in the string haystack.
    Return Value: Returns a pointer to the beginning of the substring, or NULL if the
       substring is not found.

    Example Output:
    strstr1: World!
    strstr2: fun
    */
    char* found_substring1 = strstr(str1, "World");
    char* found_substring2 = strstr(str2, "fun");
    printf("strstr1: %s\n", found_substring1);
    printf("strstr2: %s\n", found_substring2);

    /*
    strtok
    Syntax: char *strtok(char *str, const char *delim);
    Purpose: The strtok() function breaks a string into a sequence of tokens
       using the specified delimiter.
    Return Value: Returns a pointer to the next token, or NULL if no more tokens are found.

    Example Output:
    strtok1: Hello
    strtok2: Programming
    */
    char* token3 = strtok(str1, ",");
    char* token4 = strtok(str2, " ");
    printf("strtok1: %s\n", token3);
    printf("strtok2: %s\n", token4);

    /*
    strxfrm
    Syntax: size_t strxfrm(char *dest, const char *src, size_t n);
    Purpose: The strxfrm() function transforms the string src into a collation key,
       placing the result in dest, which should be a buffer large enough to hold the
       entire transformed string.
    Return Value: Returns the length of the transformed string (excluding the null byte).

    Example Output:
    strxfrm1: Hello, World!
    strxfrm2: Programming is fun.
    */
    size_t xfrm_len1 = strxfrm(dest1, str1, sizeof(dest1));
    size_t xfrm_len2 = strxfrm(dest2, str2, sizeof(dest2));
    printf("strxfrm1: %s\n", dest1);
    printf("strxfrm2: %s\n", dest2);

    /*
    index
    Syntax: char *index(const char *str, int character);
    Purpose: The index() function is a deprecated version of strchr() and returns a
       pointer to the first occurrence of the character in the given string.
    Return Value: Returns a pointer to the matched character or NULL if the character is not found.

    Example Output:
    index1: World!
    index2: ming is fun.
    */
    char* index_result1 = index(str1, 'o');
    char* index_result2 = index(str2, 'm');
    printf("index1: %s\n", index_result1);
    printf("index2: %s\n", index_result2);

    /*
    rindex
    Syntax: char *rindex(const char *str, int character);
    Purpose: The rindex() function is a deprecated version of strrchr() and returns a
       pointer to the last occurrence of the character in the given string.
    Return Value: Returns a pointer to the matched character or NULL if the character is not found.

    Example Output:
    rindex1: old!
    rindex2: ming is fun.
    */
    char* rindex_result1 = rindex(str1, 'o');
    char* rindex_result2 = rindex(str2, 'm');
    printf("rindex1: %s\n", rindex_result1);
    printf("rindex2: %s\n", rindex_result2);

    return 0;
}
