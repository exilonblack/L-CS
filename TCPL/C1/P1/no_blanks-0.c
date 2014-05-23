#include <stdio.h>

/* Exercise 1.18. Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely 
blank lines.  */
main()
{
    int c, state;
    
    while ((c = getchar()) != EOF)
        if (c != ' ' || c == '\t')
            putchar(c);
    return 0;
}