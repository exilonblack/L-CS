PS L-CS\TCPL\Chapter Exercises\chapter_1.md>
====

The C Programming Language Problem Set 1

***Exercise 1.1.*** Run the ``hello, world'' program on your system. Experiment with leaving out
parts of the program, to see what error messages you get. 

  <p align='center'>Syntax table of hello.c</p>
  
  <table>
   <tr>
          <td colspan='3'>Code</td>
          <td colspan='3'>Error</td>
          <td colspan='3'>Description</td>
          <td colspan='3'>Code Line</td>
      </tr>
      <tr>
          <td colspan='4'>#include <"stdio.h"></td>
          <td colspan='2'>warning</td>
          <td colspan='2'>Incompatible implicit declaration of built-in function 'printf'</td>
          <td>hello.c:4:5</td>
      </tr>
      <tr>
          <td colspan='3'>main()</td>
          <td colspan='1'>error</td>
          <td>defines a function called main</td>
          <td>hello.c:3:1</td>
      </tr>
      <tr>
          <td colspan='3'>{}</td>
          <td colspan='1'>error</td>
          <td>statements of main are enclosed in braces</td>
          <td>hello.c:4:1, hello.c:6:1</td>
      </tr>
      <tr>
          <td colspan='4'>printf("hello, world!\n");</td>
          <td colspan='1'>none</td>
          <td>none</td>
          <td>none</td>
      </tr>
      <tr>
          <td colspan='0'></td>
          <td colspan='0'>none</td>
          <td>none</td>
          <td>none</td>
      </tr>
  </table>
