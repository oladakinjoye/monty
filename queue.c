#include "monty.h"
/**
 * f_queue - print the top
 * @head: head of stack
 * @counter: line_num
 * Return: no return
 *
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - adds node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
 *
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *ax;

	ax = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (ax)
	{
		while (ax->next)
			ax = ax->next;
	}
	if (!ax)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		ax->next = new_node;
		new_node->prev = ax;
	}
}
