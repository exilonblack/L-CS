#include <stdio.h>

#define IN 1    /* inside a word */
#define OUT 0   /* outside a word */

/* count lines, words, and characters in input */
main()
{
    int c, state;
    
    state = IN;
    while ((c = getchar()) != EOF) {
        printf("%c", c);
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            printf("\n");
        }
    }
}