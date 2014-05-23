#include <stdio.h>

/* Exercise 1-21. Write a program entab that replaces blanks in the input with the proper number of tabs to space to the next tab stop.
Assume a fixed set of tap stops, say every n columns. Should n be a variable or a symbolic parameter? */
main()
{
    int c;
    
    while ((c = getchar()) != EOF)
        if (c == ' ')
            putchar(' ');
        else
            putchar(c);
    return 0;
}