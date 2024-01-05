#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>

#define STACK_SIZE 1024

extern int stack[STACK_SIZE];
extern int top;

void push(int value);
void pall(void);

#endif /* MONTY_H */

