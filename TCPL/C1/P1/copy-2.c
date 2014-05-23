#include <stdio.h>

/* Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more
blanks by a single blank. */

#define MAXLINE 1000
#define IN_SPACE 1
#define OUT_SPACE 0

main(){
    int c, i, len, state;
    
    char line[MAXLINE];
   
    state = OUT_SPACE;
    len = 0;
    
    while ((c = getchar()) != EOF) {
        line[len] = c;
        ++len;
    }
        
    for (i=0; i < len-1; ++i)
        if (line[i] == ' ' && state == OUT_SPACE){
            putchar(line[i]);
            state = IN_SPACE;
        }
        else if (line[i] == ' ' && state == IN_SPACE) {
            state = OUT_SPACE;
        }
        else
            putchar(line[i]);
    printf("\n");
}