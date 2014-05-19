PS L-CS\TCPL\CN\chapter_1.md>
====

The C Programming Language Chapter 1 - A Tutorial Introduction

**1.1 Getting Started**

  Inside Powershell:
  
    PS cc hello.c
    PS ./a
    hello, world
    
  
  A C program consists of *functions* and *variables*, A function contains *statements* that specify the computing operations to be done, and variables store values used during the computation.
  
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
  
  The names in the parenthesis of a function is called a parameter and "hello, world!\n" in printf() is called an argument.

  printf() is a library function that *prints output*. The example of libraries must be 'stdio.h'
  
  "hello, world!\n" is a *character string* or a *string constant* and the contents inside it are *characters*
  
  The '\n' is a C notation for a newline character.
  
    printf("hello, world!\n
    ");
    
  will give an error.
  
  printf() does not automatically supply newlines so it's necessary to put them everytime...
  
  This is another program that prints "hello, world" in another way. (Refer to [hello-1.c](https://github.com/exilonblack/L-CS/blob/master/TCPL/CP/Chapter%201/hello-1.c))
  
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
    
    
