#include <stdio.h>

/* Exercise 1-8. Write a program to count blanks, tabs, and newlines. */
main()
{
    int c, nb, nt, nl;
    
    nl = nt = nb = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++nt;
        if (c == ' ')
            ++nb;
    }
    
    printf("Blanks: %d\n", nb);
    printf("Tabs: %d\n", nt);
    printf("Newlines: %d\n", nl);
}