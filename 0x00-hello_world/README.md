Toggle navigation
My Planning
Projects
QA Reviews I can make
Evaluation quizzes
Curriculums
Concepts
Conference rooms
Servers
Sandboxes
Video on demand
Peers
Captain's Logs
Slack
My Profile
My Planning
Projects
QA Reviews I can make
Evaluation quizzes
Curriculums
Concepts
Conference rooms
Servers
Sandboxes
Video on demand
Peers
Captain's Logs
Slack
My Profile
0x00. C - Hello, World
In a nutshell…
Auto QA review: 26.65/41 mandatory & 0.0/12 optional
Altogether:  65.0%
Mandatory: 65.0%
Optional: 0.0%
Calculation:  65.0% + (65.0% * 0.0%)  == 65.0%
Concepts
For this project, we expect you to look at this concept:

C programming

Resources
Read or watch:

Everything you need to know to start with C.pdf (You do not have to learn everything in there yet, but make sure you read it entirely first)
Dennis Ritchie
“C” Programming Language: Brian Kernighan
Why C Programming Is Awesome
Learning to program in C part 1
Learning to program in C part 2
Understanding C program Compilation Process
Betty Coding Style
Hash-bang under the hood (Look at only after you finish consuming the other resources)
Linus Torvalds on C vs. C++ (Look at only after you finish consuming the other resources)
man or help:

gcc
printf (3)
puts
putchar
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
Why C programming is awesome
Who invented C
Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
What happens when you type gcc main.c
What is an entry point
What is main
How to print text using printf, puts and putchar
How to get the size of a specific type using the unary operator sizeof
How to compile using gcc
What is the default program name when compiling with gcc
What is the official C coding style and how to check your code with betty-style
How to find the right header to include in your source code when  of this project.
Any form of plagiarism is strictusing a standard library function
How does the main function influence the return value of the program
Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else's work.
You are not allowed to publish any contently forbidden and will result in removal from the program.
Requirements
C
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file at the root of the repo, containing a description of the repository
A README.md file, at the root of the folder of this project, containing a description of the project
There should be no errors and no warnings during compilation
You are not allowed to use system
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
Shell Scripts
Allowed editors: vi, vim, emacs
All your scripts will be tested on Ubuntu 20.04 LTS
All your scripts should be exactly two lines long ($ wc -l file should print 2)
All your files should end with a new line
The first line of all your files should be exactly #!/bin/bash
More Info
Betty linter
To run the Betty linter just with command betty <filename>:

Go to the Betty repository
Clone thel users with chmod a+x betty
Move the betty file into /bin/ directory or somewhere else in your $PAT repo to your local machine
cd into the Betty directory
Install the linter with sudo ./install.sh
emacs or vi a new file called betty, and copy the script below:
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
Once saved, exit file and change permissions to apply to alH with sudo mv betty /bin/
You can now type betty <filename> to run the Betty linter!

Quiz questions
Great! You've completed the quiz successfully! Keep going!
Question #0
What are the different steps to form an executable file from C source code


Compilation and linking


Interpretation, compilation and assembly


Preprocessing, compilation, assembly, and linking


Interpretation, assembly and compilation


Preprocessing and compilation

Question #1
In which category belongs the C programming language?


Compiled language


Interpreted language

Question #2
Which command can be used to compile a C source file?


gcc


c-compiler


bash

Question #3
What is the common extension for a C header file?


.hpp


.ch


.header


.h

Question #4
What is the common extension for a C source file?


.c


.py


.txt


.cpp

Question #5
Which of the following are both valid comment syntaxes in ANSI C, and Betty-compliant?


/*
Comment
*/

/* Comment */

// Comment

/* Comment /* nested */ */

/*
The output should be saved in the file c
julien@u
 * Comment
 */

# Comment
Tasks
0. Preprocessor
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a script that runs a C file through the preprocessor and save the result into another file.

The C file name will be saved in the variable $CFILEbuntu:~/c/0x00$ cat main.c 
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ ./0-preprocessor 
julien@ubuntu:~/c/iler  2-assembler c  main.c  main.s  Makefile
julien@ubuntu:~/c/0x00$ cat main.s
    .file   "main.c"
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    pushq   %rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    movq    %rsp, %rbp
    .cfi_def_cfa_register 6
    movl    $0, %eax
    popq    %rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
julien@ubuntu:~/c/0x00$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x00-hello_world
File: 2-assembler
Done?! Help
×
Learners who are done with "2. Assembler"
Check your code
×
Correction of "2. Asseuld be main.o
julien@ubuntu:~e.GNU-stack^@.rela.eh_frame^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^height, opacity

![](http://www.example.com/image.jpg)
![](http://www.example.com/ fail
Efficiency success
Efficiency fail
Text answer success
Text answer fail
Skipped - Previous check failed
Get a sandbox QA Review
×
3. Name
4. Hello, puts
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

Use the function puts
You are not allowed to use printf
Your program should end with the value 0
julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
"Programming is like building a multilingual puzzle
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x00-hello_world
File: 4-puts.c
Done?! Help
×
Learners who are done with "4. Hello, puts"
Check your code
×
Correction of "4. Hello, puts"
Start a new test Close

Rh "0. Preprocessor"
Check 0x00$ tail c
# 942 "/usr/include/stdio.h" 3 4

# 2 "main.c" 2


# 3 "main.c"
int main(void)
{
 return (0);
}
julien@ubuntu:~/c/0x00$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x00-hello_world
File: 0-preprocessor
Done?! Help
×
Lyour code
×
Correction of "0. Preprocessor"
Start a new test Close

Requirement success
Requirement fail
Code success
Code fail
Efficiency success
Efficiency fail
Text answer success
Text answer fail
Skipped - Previous check failed
Get a sandbox QA Review
×
0. Preprocessor
1. Compiler
mandatory
Scor that compiles a C file but does not link.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .o instead of .c.
Example: if the C file is main.c, the output file shon (0);
}
julien@ubuntu:~/c/0x00$ ./2-assembler
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compRequirubuntu:~/c/0x00$ echo $?
1
julien@ubuntu:~/c/0x00$ ./quote 2> q
julien@ubuntu:~/c/0x00$ cat q
and that piece of art is useful" - Dora Krevious check failed
Get a sandbox QA Review
×
2. Assembler
3. Name
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a script that compiles a C file and creates an executable named cisfun.

The C file name will be saved in the variable $CFILE
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./3-name 
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   3-name  cisfun  main.o  Makefile
100-intel       2-assembler  c       main.c  main.s
juli^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@,^@^@^@^A^@^@^@0^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^/c/0x00$ ./1-compiler 
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   c            main.o
Makefile               100-intel      main.c  main.s
julien@ubuntu:~/c/0x00$ cat -v main.o | head
^?ELF^B^A^A^@^@^@^@^@^@^@^@^@^A^@>^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^P^B^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@@^@^K^@^H^@UHM-^IM-eM-8^@^@^@^@]M-C^@GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609^@^T^@^@^@^@^@^@^@^AzR^@^Ax^P^A^[^L^G^HM-^P^A^@^@^\^@^@^@^\^@^@^@^@^@^@^@^K^@^@^@^@A^N^PM-^F^BC^M^FF^L^G^H^@^@^@^@^@^@^@^@@^@^@^@^@^@^@^@^@^@^@M- ^A^@^@^@^@^@^@^X^@^@^@^@^@^@^@    ^@^@^@^F^@^@^@^H^@ -pedantic -std=gnu89 5-printf.c
julien@ubuntu:~/c/0x00$ ./a.out 
with proper gra^@^@^@^@^@^@^@^@^@^@^@^@^@'^@^@^@^H^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@mbler"
Start a new test Close

Requirement success
Requirement fail
Code success
Code fail
Efficiency success
Efficiency fail
Text answer success
Text answer fail
Skipped - Program should compile without any warnings when using the -Wall gcc option
julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
julien@ubuntu:~/c/0x00$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@@^@^@^@^@5^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@5^@^@orpar, 2015-10-19
julien@ubuntu:~/c/0x00$ grep printf < 101-quote.c
julien@ubuntu:~/c/0x00$ grep put < 101-quote.c
julien@ubuntu:~/c/0x00$ 
Repo:

GitHub reloat: 4 byte(s)
julien@ubuntu:~/c/0x00$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x00-hello_w
Check your code
×
Correction of "1. Compiler"
Start a new test Close

Requirement success
Requirement fail
Code success
Code fail
Efficiency success
Efficiency fail
Text answer succe^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^D^@M-qM-^?^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^untu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Aen@ubuntu:~/c/0x00$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x00-hello_world
File: 3-name
Done?! Help
×
Learners who are done with "3. Name"
Check your code
×
Correction of "3. Name"
Start a new test Close

Requirement success
Requirement fail
Code success
Codeut you have to be a genius to understand the simplicity
×
Recommended Sandbox
Copyright © 2023 ALX, All rights reserved.

?Start search by typing in this field?
×
Markdown Guide
Emphasis
**bold**
*italics*
~strikethrough~~
Headers
# Big header
## Medium header
### Small header
#### Tiny header
Lists
* Generic list item
* Generic list item
* Generic list item

1. Numbered list item
2. Numbered list item
3. Numbered list item
Links
[Text to display](http://www.example.com)
Quotes
> This is a quote.
> It can span multiple lixport CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry poi^@^@^@^@^@^@^@main.c^@main^@^@^@^@ ^@^@^@^@^@^@^@^B^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@.symtab^@.strtab^@.shstrtab^@.text^@.ss
Text answer fail
Skipped - Previous check failed
Get a sandbox QA Review
×
1. Compiler
2. Assembler
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a script that generates the assembly code of a C code and save it in an output file.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
   6-dev-i386 on you^@^@^@^@^@^@^X^@^@^@^@^@^@^@^Q^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^A^@^@^@^@^@^@T^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^@^@^@^@^@^@^@M-X^@^@^@^@^@^@^@
^@^@^@^H^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@  ^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^P^A^@^@^@^@^@^@^M^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@julien@ubuntu:~/c/0x00$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x00-hello_world
File: 1-compiler
Done?! Help
×
Learners who are done with@^@^@^@^@^@^@^@^@^A^@^@pository: alx-low_level_programming
Directory: 0x00-hello_world
File: 101-quote.c
Done?! Help
×
Learners who are done with "8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity"
Check your code
×
Correction of "8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity"
Start a new test Close

Requirement success
Requirement fail
Code success
Code fail
Efficiency success
Efficiency fail
Text answer success
Text answer fail
Skipped - Previous check failed
Ask for a new correction : in progress... : an error occurred Get a sandbox QA Review
×
8. UNIX is basically a simple operating system, b^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^lowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
Your program should return 1
Your p@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^[^@^@^@^A^@^@^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@!^@^@^@^A^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@J^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@8^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@E^@^@^@^D^@^@^@@^@^@^@^@^ nation"
Start a new test Close

Requirement success
Requirement fail
Code success
Code fail
Efficiency success
Efficiency fail
Text answer success
Text answer fail
Skipped - Previous check failed
Get a sandbox QA Review
×
6. Size is not grandeur, and territory does not make a nation
7. Intel
#advanced
Score: 0.0% (Checks completed: 0.0%)
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

The C file name will be saved in the variable $CFILE.
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s
julien@ubuntu:~/c/0x00$ e returdata^@.bss^@.comment^@.note: 65.0% (Checks completed: 100.0%)
Write a scriptearners who are dnt
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./100-intel 
julien@ubuntu:~/c/0x00$ cat main   .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
julien@ubuntu:~/c/0x00$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x00-hello_world
File: 100-intel
Done?! Help
×
Learners who are done with "7. Intel"
Check your code
×
Correction of "7. Intel"
Start a new test Close

one witement success
Requirement fail
Code success
Code fail
Efficiency success
Efficiency fail
Text answer success
Text answer fail
Skipped - Previous check failed
Ask for a new correction : in progress... : an error occurred Get a sandbox QA Review
×
7. Intel
8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
#advanced
Score: 0.0% (Checks completed: 0.0%)
Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new0px | opacity: 0.6)
Tables
| Column 1 | Column 2 | Column 3 |
| -------- | -------- | -------- |
| John     | Doe      | Male     |
| Mary     | Smith    | Female   |

Or without aligning the columns...

| Column 1 | Column 2 | Column 3 |
| -------- | -------- | -------- |
| John | Doe | Male |
| Mary | Smith | Female |
Displaying code
`var example = "hello!";`

Or spanning multiple lines...

```
var example = "hello!";
alert(example);
``ency fail
Text answer success
Text answer fail
Skipped - Previous check failed
Get a sandbox QA Review
×
4. Hello, puts
5. Hello, printf
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

Use the function printf
You are not allowed to use the function puts
Your program should return 0
Your program should compile without warning when using the -Wall gcc option
julello_world
File: 5-printf.c
Done?! Help
×
Learners who are done with "5. Hello, printf"
Check your code
×
Correction of "5. Hello, printf"
Start a new test Close

Requirement success
Requirement fail
Code success
Code fail
Efficiency success
Efficiency fail
Text answer success
Text answer fail
Skipped - Previous check failed
Get a sandbox QA Review
×
5. Hello, printf
6. Size is not grandeur, and territory does not make a nation
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a C program that prints the size of various types on the computer it is compiled and run on.

You should produce the exact same output as in the example
Warnings are allowed
Your program should return 0
You might have to install the package libc "1. Compiler"r Linux to test the -m32 gcc option
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m32 -o size32 2> /tmp/32
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m64 -o size64 2> /tmp/64
julien@ubuntu:~/c/0x00$ ./size32
Size oe.com/image.jpg | height: 124px | width: 8ien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextralways 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~mmar, but the outcome is a piece of art,
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x00-hf a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a f@^@^@^@^@^@^@^@^C^@^E^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^D^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^R^@^A^@^@^@^@^@^@^@^@^@^K^@orld
File: 6-size.c
Done?! Help
×
Learners who are done with "6. Size is not grandeur, and territory does not make a nation"
Check your code
×
Correction of "6. Size is not grandeur, and territory does not make a.s
    .file   "main.c"
    .intel_syntax noprefix
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    push    rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    mov rbp, rsp
    .cfi_def_cfa_register 6
    mov eax, 0
    pop rbp
    .cfi_def_cfa 7, 8
    ret
  line, to the standard error.

You are not al/c/0x00$ export CFILE=main.c
julien@ubnes!
Images
CSS style available: width, equirement success
Requirement fail
Code success
Code fail
Efficiency success
Efficimage.jpg | width: 200px)
![](http://www.exampl`
