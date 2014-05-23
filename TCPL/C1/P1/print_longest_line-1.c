#include <stdio.h>
#define MAXLINE 1000    /* maximum input line length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);
int countChar(char string[]);
/* print the longest input line */
main()
{
    int len, charLen;                /* current line length */
    int max;                /* maximum length seen so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];   /* longest line saved here */
    
    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0) {    /* there was a line */
        charLen = countChar(longest);
        printf("%d %s %d\n", len, longest, charLen);
    }
    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c, i;
    
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to' assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    
    i = 0;
    while ((to[i] = from[i]) != '\n')
        ++i;
}

/* countChar: count the characters found in the input */
int countChar(char string[])
{
    int i = 0;
    
    while (string[i] != '\0'){
        ++i;
    }
    return i;
}

