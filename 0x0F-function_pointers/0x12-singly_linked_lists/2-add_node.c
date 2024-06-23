#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(const char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}

return (i);
}

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the pointer to the head of the list.
 * @str: The string to be added as the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *add;

add = malloc(sizeof(list_t));
if (add == NULL)
return (NULL);

add->str = strdup(str);
if (add->str == NULL)
{
free(add);
return (NULL);
}

add->len = _strlen(str);
add->next = *head;
*head = add;

return (add);
}
