#include "monty.h"
/**
 * add - swaps the top two elements of the stack
 * @stack: keeps values
 * @line_number: counting lines
 * Return: nothing
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *to_add;
	int to_add_1;
	int to_add_2;
	int total;
	unsigned int number_elements = 0;

	to_add = *stack;
	while (to_add != NULL)
	{
		number_elements++;
		to_add = to_add->next;
	}
/*check if stack contains no less than 2 integers */
	to_add = *stack;
	if (number_elements > 1 && stack != NULL)
	{
/* assigning value 1 to first, value 2(next after first) to second */
		to_add_1 = to_add->n;
		to_add_2 = to_add->next->n;
		to_add->n = to_add_1;
		to_add->next->n = to_add_2;
/*		printf("first %d\n second %d\n", to_add_1, to_add_2); */
/* adding value of fist and second */
		total = (to_add->n) + (to_add->next->n);
		to_add->next->n = total;
/*		printf("%d\n", total); */
	}
	else
	{
		printf("L%d: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
}
