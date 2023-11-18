#include "monty.h"
/**
  * f_rotr- rotates the stack to the bottom
  * @head: stack head
  * @counter: line_num
  * Return: no return
  *
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy1;

	copy1 = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy1->next)
	{
		copy1 = copy1->next;
	}
	copy1->next = *head;
	copy1->prev->next = NULL;
	copy1->prev = NULL;
	(*head)->prev = copy1;
	(*head) = copy1;
}
