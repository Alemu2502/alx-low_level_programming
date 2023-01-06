#include "main.h"

/**
 * _strlen - length of string
 * @s: input character
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
