#include <stdio.h>

/* copy input to output; 1st version */
main()
{
    int c;
    
    c = getchar();
    while (c != EOF) {
        printf("%c", c);
        c = getchar();
    }
}