#include <stdio.h>
#define MAXLINE 1000    /* Character limits */

void copy(char to[], char from[]);
void reverse(char string[], int length);

/* Exercise 1.18. Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely 
blank lines.  */
main()
{
    char string[MAXLINE], str[MAXLINE];
    int c, i;

    for (i = 0; (c = getchar()) != EOF; ++i)
        string[i] = c;
        copy(str, string);
    
    reverse(str, i);
        
    printf("\n");
    return 0;
}

/* reverse: prints the string in reverse. */
void reverse(char string[], int length)
{
    int i;
    for (i = length; i >= 0; --i)
        printf("%c", string[i]);
}

/* copy: copy 'from' into 'to' assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    
    i = 0;
    while ((to[i] = from[i]) != '\n')
        ++i;
}