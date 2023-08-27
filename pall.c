#include "monty.h"
/**
 * f_pall - print the elements of a stack in a program
 * @head: stack head
 * @counter: no used
 * Return: If the stack is empty, nothing is printed.
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
