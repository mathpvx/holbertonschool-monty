#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int line_number = 0;

int main(int argc, char *argv[]) {
	    if (argc != 2) {
		            fprintf(stderr, "Usage: %s file\n", argv[0]);
			            exit(EXIT_FAILURE);
				        }

	        FILE *file = fopen(argv[1], "r");
		    if (!file) {
			            fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
				            exit(EXIT_FAILURE);
					        }

		        char opcode[256];
			    int value;

			        while (fscanf(file, "%s", opcode) != EOF) {
					        line_number++;

						        if (strcmp(opcode, "push") == 0) {
								            if (fscanf(file, "%d", &value) == 1) {
										                    push(value);
												                } else {
															                fprintf(stderr, "L%d: usage: push integer\n", line_number);
																	                exit(EXIT_FAILURE);
																			            }
									            } else if (strcmp(opcode, "pall") == 0) {
											                pall();
													        } else {
															            fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
																                exit(EXIT_FAILURE);
																		        }
							    }

				    fclose(file);
				        return 0;
}

