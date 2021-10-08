#include "lists.h"

/**
 * _strlen - finds the length of as string passed to it
 * @s: string whose length is to be found
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
		x++;
	return (x);
}

/**
 * _strcpy - copies a string pointed to by src to buffer pointed to by dest,
 * including the terminating null byte '\0'
 * @dest: pointer pointing to buffer to which string will be copied
 * @src: pointer pointing to string to be copies
 * Return: pointer pointing to buffer containing copied string
 */
char *_strcpy(char *dest, const char *src)
{
	int x, y;

	x = 0;
	while (*(src + x) != '\0')
		x++;
	for (y = 0; y <= x; y++)
		*(dest + y) = *(src + y);
	return (dest);
}

/**
 * add_node - adds a new node at the beginning of a list.
 * @head: double pointer to head of the linked list lits_t
 * @str: string to initialize list_t's str variable with
 *
 * Return: Address of new element of NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	new->str = malloc(sizeof(char) * _strlen(str));
	if (new->str == NULL)
	{
		free(new->str);
		free(new);
		return (NULL);
	}
	new->str = _strcpy(new->str, str);
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (*head);
}
