PS L-CS\TCPL\ChapterExercises\chapter_1.md>
====

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
