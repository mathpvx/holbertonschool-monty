#include "monty.h"
#include <stdlib.h>

int stack[STACK_SIZE];
int top = -1;
int line_number;  // Déclarer la variable ici

void push(int value) {
	    if (top == STACK_SIZE - 1) {
		            fprintf(stderr, "L%d: Stack overflow\n", line_number);
			            exit(EXIT_FAILURE);
				        }
	        stack[++top] = value;
}

void pall(void) {
	    int i;
	        for (i = top; i >= 0; i--) {
			        printf("%d\n", stack[i]);
				    }
}

