# <p align="center">C - The Monty Program </p>

## Objective

The goal of this project is to create an interpreter for Monty ByteCodes files.

## Description

The program will read files given in input by the user and execute the command found on each lines if corrects.
It will print an error message if the commands are invalid, or if an error occured during command execution. 

## Requirements

-   Allowed editors: `vi`, `vim`, `emacs`
-   All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is mandatory
-   Code must follow the `Betty` style
-   Allowed to use a maximum of one global variable
-   No more than 5 functions per file
-   The prototypes of all functions should be included in header file called `monty.h`
-   Header file should be pushed
-   All header files should be include guarded
-   Tasks are expected to be done in the order shown in the project

## Compilation command

gcc -Wall -Werror -Wextra -pedantic *.c -o monty

## Mandatory Tasks

### Task 0. push, pall

- Implement the `push` and pall opcodes.

**The `push` opcode**

- The opcode `push` pushes an element to the stack.

  * Usage: `push <int>`
    * where `<int>` is an integer
  * if `<int>` is not an integer or if there is no argument given to `push`, print the error message `L<line_number>: usage: push integer`, followed by a new line, and exit with the status EXIT_FAILURE
  * where `line_number` is the line number in the file
  * You won’t have to deal with overflows. Use the `atoi` function

**The pall opcode**

- The opcode `pall` prints all the values on the stack, starting from the top of the stack.

  * Usage `pall`
  * Format: see example
  * If the stack is empty, don’t print anything

