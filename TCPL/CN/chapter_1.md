PS L-CS\TCPL\CN\> more chapter_1.md
====

The C Programming Language Chapter 1 - A Tutorial Introduction

**1.1 Getting Started**

  Inside Powershell:
  
    PS cc hello.c
    PS ./a
    hello, world
    
  
  A C program consists of *functions* and *variables*, A function contains *statements* that specify the computing 
  operations to be done, and variables store values used during the computation.
  
  The main() function is a special function where everything begins execution.

  <p align='center'>**Syntax table of hello.c**</p>

  <table>
    <tr>
        <td>Code</td>
        <td>Description</td>
        <td>Code Line</td>
    </tr>
    <tr>
        <td>#include <"stdio.h"></td>
        <td>include info about standard library</td>
        <td>hello.c:1:1</td>
    </tr>
    <tr>
        <td>main()</td>
        <td>defines a function called main</td>
        <td>hello.c:3:1</td>
    </tr>
    <tr>
        <td>{}</td>
        <td>statements of main are enclosed in braces</td>
        <td>hello.c:4:1, hello.c:6:1</td>
    </tr>
    <tr>
        <td>printf("hello, world!\n");</td>
        <td>prints sequence of characters</td>
        <td>hello.c:5:1</td>
    </tr>
  </table>
  
  The names in the parenthesis of a function is called a parameter and "hello, world!\n" in printf() is called an 
  argument.

  printf() is a library function that *prints output*. The example of libraries must be 'stdio.h'
  
  "hello, world!\n" is a *character string* or a *string constant* and the contents inside it are *characters*
  
  The '\n' is a C notation for a newline character.
  
    printf("hello, world!\n
    ");
    
  will give an error.
  
  printf() does not automatically supply newlines so it's necessary to put them everytime...
  
  This is another program that prints "hello, world" in another way.
  (Refer to [hello-1.c](https://github.com/exilonblack/L-CS/blob/master/TCPL/CP/chapter_1/hello-1.c))
  
    #include <stdio.h>

    main()
    {
        printf("hello, ");
        printf("world")
        printf("\n");
    }
    
  Inside Powershell:
    
    PS cc hello-1.c
    PS ./a
    hello world
    
    
**1.2 Variables and Arithmetic Expressions**

  Words around '/**/' are called comments. It's just there to explain briefly a certain code. It's ignored by the 
  compiler.
 
    /* print Fahrenheit-Celsius table
     for fahr = 0, 20, ..., 300 */
 
  Comments may be placed anywhere with blanks, tabs, and newlines.
  
  In C, variables must be declared before they're used.

  A declaration announces the properties of variables; it consists of a name and a list of variables, such as:

    int fahr, celsius;
    int lower, upper, step;

  int means integer contrast to float which means floating-point numbers.
  
  Computation in the temperature conversion program begins with the assignment statements 
     
    lower = 0;
    upper = 300;
    step = 20;
    
  Each line of the table is computed the same way, so we use a loop that repeats once per output line; this is the 
  purpose of the while loop 
    while (fahr <= upper) {
    ...
    }
    
  The while loop operates as follows: The condition in parentheses is tested. If it is true (fahr is less than or equal 
  to upper), the body of the loop (the three statements enclosed in braces) is executed.
  
  Then the condition is re-tested, and if true, the body is executed again. When the test becomes false (fahr exceeds 
  upper) the loop ends, and execution continues at the statement at follows the loop.
  
  There are no further statements in this program, so it terminates. 

  C does not care about proper indentation and spaces but it's still necessary for a programmer to read.
  
  printf(); is not part of C, it's from a library made by the ANSI stardard.
  
  Dividing integers like: 5/9 will truncate the decimal points since they're both integers and will only take the whole 
  number.
  
  5.0/9.0 however will be computed to its complete value
  
  **<p align='center'>Table of Character notations for %d and %f</p>**
  <table>
    <tr>
      <td>%d</td>
      <td>Print as decimal integer</td>
    </tr>
    <tr>
      <td>%6d</td>
      <td>Print as decimal integer, at least 6 characters wide</td>
    </tr>
    <tr>
      <td>%f</td>
      <td>Print as floating point</td>
    </tr>
    <tr>
      <td>%6f</td>
      <td>Print as floating point, at least 6 characters wide</td>
    </tr>
   <tr>
      <td>%.2f</td>
      <td>Print as floating point, 2 characters after the decimal point</td>
   </tr>
   <tr>
      <td>%6.2f</td>
      <td>print as floating point, at least 6 wide and 2 after decimal point</td>
    </tr>

**1.3 The for statement**

  The for loop three parts:
  
    for(initialization; conditional; step) {
      code goes here...
    }
  
  Initialization is done once, before the loop proper is entered.
  
  Conditional is the second part of the for-loop which controls the loop.
  
  Step is executed and re-evaluates the conditional. If the condition is true, the loop will run otherwise, it 
  terminates.
  
  The choice between while and for is arbitrary, based on which seems clearer. The for is usually appropriate for loops
  in which the initialization and increment are single statements and logically related, since it is more compact than 
  while and it keeps the loop control statements together in one place. 

  
