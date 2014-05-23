#include <stdio.h>

#define LOWER 0     /* lower limit */
#define UPPER 300   /* upper limit */
#define STEP 20     /* step size */

/* Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use a function
for conversion. */

float fahrToCelsius(int fahr);

main()
{
    int fahr;
    
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, fahrToCelsius(fahr));
}

float fahrToCelsius(int fahr)
{
    return (5.0/9.0)*(fahr-32);
}