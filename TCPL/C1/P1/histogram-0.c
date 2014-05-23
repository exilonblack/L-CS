#include <stdio.h>

/* Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */
main()
{
    int c, i, j;
    int ncc[26], nlc[26];
    
    for (i = 0; i < 26; ++i)
        ncc[i] = nlc[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z')
            ++nlc[c-97];
            
        else if (c >= 'A' && c <= 'Z')
            ++ncc[c-65];

    }
    
    printf("\t\tSMALL LETTERS AND LETTER COUNTS\n");
    for (i = 0; i < 26; ++i) {
        printf("%c | ", 97+i);
        for (j = 0; j < nlc[i]; ++j)
            printf("*");
            
        if (nlc[i] > 0)
            printf(" (%02d)\n", nlc[i]);
        else
            printf("\n");
    }
    
    printf("  |_____________________________________________________\n");
    printf("          5     10    15    20    25    30    45    50    \n");
    
    printf("\n\t\tCAPITAL LETTERS AND LETTER COUNTS\n");
    for (i = 0; i < 26; ++i) {
        printf("%c | ", 65+i);
        for (j = 0; j < ncc[i]; ++j)
            printf("*");
            
        if (ncc[i] > 0) 
            printf(" (%02d)\n", ncc[i]);
        else
            printf("\n");
    }
    
    printf("  |_____________________________________________________\n");
    printf("          5     10    15    20    25    30    45    50    \n");

}
