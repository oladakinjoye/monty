#include "monty.h"
/**
 * f_mul - multiply the top two element of the stack.
 * @head: head of stack
 * @counter: line_num
 * Return: no return
 */
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len1 = 0;
	int ax;

	h = *head;
	while (h)
	{
		h = h->next;
		len1++;
	}
	if (len1 < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	ax = h->next->n * h->n;
	h->next->n = ax;
	*head = h->next;
	free(h);
}
