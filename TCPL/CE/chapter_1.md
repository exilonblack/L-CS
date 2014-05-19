PS L-CS\TCPL\CN\> more chapter_1.md
===
The C Programming Language Chapter 1 - A Tutorial Introduction
=======

The C Programming Language Problem Set 1

***Exercise 1.1.*** Run the ``hello, world'' program on your system. Experiment with leaving out
parts of the program, to see what error messages you get. 

  <p align='center'>Syntax table of hello.c</p>
  
  <table>
   <tr>
          <td colspan='3'>Code</td>
          <td colspan='2'>Error</td>
          <td colspan='5'>Description</td>
          <td colspan='1'>Code Line</td>
      </tr>
      <tr>
          <td colspan='4'>#include <"stdio.h"></td>
          <td colspan='1'>warning</td>
          <td colspan='5'>Incompatible implicit declaration of built-in function 'printf'</td>
          <td colspan='1'>hello.c:4:5</td>
      </tr>
      <tr>
          <td colspan='3'>main()</td>
          <td colspan='2'>error</td>
          <td colspan='5'>expected identifier or '(' before '{' token</td>
          <td colspan='1'>hello.c:3:1</td>
      </tr>
      <tr>
          <td colspan='3'>{}</td>
          <td colspan='2'>error</td>
          <td colspan='5'>expected declaration specifiers before 'printf'</td>
          <td colspan='1'>hello.c:4:5</td>
      </tr>
      <tr>
          <td colspan='5'>printf("hello, world!\n");</td>
          <td colspan='6'> </td>
      </tr>
  </table>

***Exercise 1-2.*** Experiment to find out what happens when prints's argument string contains
\c, where c is some character not listed above. 

  **Code**
  
    #include <stdio.h>

    main()
    {
        printf("hello, world!\c");
    }
    
  **Powershell**
  
    PS <..loc..> cc hello-2.
    hello-2.c: In function 'main':
    hello-2.c:5:12: warning: unknown escape sequence: '\c' [enabled by default]
        print("hello, world!\c");
    PS <..loc..> 

  '\c' character notation doesn't exist so it gave ne an error.
<<<<<<< HEAD:TCPL/CE/chapter_1.md
>>>>>>> 1b369e746a5bea585efd3bf19c92933f5ba2665a
=======

***Exercise 1-3.*** Modify the temperature conversion program to print a heading above the table.

  **Code**
  
    #include <stdio.h>

    /* print Fahrenheit-Celsius table
        for fahr = 0, 20, ..., 300; floating-point version */
    main()
    {
        float fahr, celsius;
        float lower, upper, step;
        
        lower = 0;      /* lower limit of temperature */
        upper = 300;    /* upper limit */
        step = 30;      /* step size */
        
        fahr = lower;
        while (fahr <= upper) {
            celsius = (5.0/9.0) * (fahr-32.0);
            printf("%3.0f %6.1f\n", fahr, celsius);
            fahr = fahr + step;
        }
    }

  **Powershell**
    
    PS <..loc..> cc fahr-2.c
    PS <..loc..> ./a
            Fahrenheit to Celsius
               |   0 | -17.8 |
               |  30 |  -1.1 |
               |  60 |  15.6 |
               |  90 |  32.2 |
               | 120 |  48.9 |
               | 150 |  65.6 |
               | 180 |  82.2 |
               | 210 |  98.9 |
               | 240 | 115.6 |
               | 270 | 132.2 |
               | 300 | 148.9 |
    PS <..loc..>
    
***Exercise 1-4.*** Write a program to print the corresponding Celsius to Fahrenheit table. 

  **Code**
  
    #include <stdio.h>

    /* print Celsius-Fahrenheit table
        for celsius = 0, 20, ..., 300; floating-point version */
    main()
    {
        float celsius, fahr;
        float lower, upper, step;
        
        lower = 0;      /* lower limit of temperature */
        upper = 300;    /* upper limit */
        step = 30;      /* step size */
        
        celsius = lower;
        while (celsius <= upper) {
            fahr = celsius * (9.0/5.0) + 32.0;
            printf("%3.0f %6.1f\n", celsius, fahr);
            celsius = celsius + step;
        }
    }
    
  **Powershell**
      
    PS <..loc..> cc celsius-0.c
    PS <..loc..< ./a
      0    32.0
      30    86.0
      60   140.0
      90   194.0
     120   248.0
     150   302.0
     180   356.0
     210   410.0
     240   464.0
     270   518.0
     300   572.0
    PS <..loc..> 
      
      
>>>>>>> 5d024d43c226d49086ef8eee1dfcdad198710058:TCPL/Chapter Exercises/chapter_1.md
