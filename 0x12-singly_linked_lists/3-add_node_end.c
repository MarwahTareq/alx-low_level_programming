#include "lists.h"
/**
 * add_node_end -adds a new node at the end of a list_t list.
 * @head: addree of pointer to the head
 * @str: str feild of node
 *
 * Return: size of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !new_node)

		return (NULL);
	if (str)
{
		new_node->str = strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
		if (node)
		{
			while (node->next)

				node = node->next;
			node->next = new_node;
		}
		else
			*head = new_node;
		return (new_node);
}
}
