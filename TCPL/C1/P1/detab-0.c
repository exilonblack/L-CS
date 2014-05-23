#include <stdio.h>

/* Exercise 1-20. Write a program detab that replaces tabs in the ionput with the proper number of blanks to space to the next tab stop.
Assume a fixed set of tap stops, say every n columns. Should n be a variable or a symbolic parameter? */
main()
{
    int c;
    
    while ((c = getchar()) != EOF)
        if (c == '\t')
            putchar(' ');
        else
            putchar(c);
    return 0;
}