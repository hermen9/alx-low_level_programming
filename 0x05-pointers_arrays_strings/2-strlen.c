#include "main.h"

/**
 * _strlen - return lenght of string
 *
 * @s: char of strings
 *
 * Return: (0)
 */

int _strlen(char *s)
{
	int total_len;

	total_len = 0;
	while (s[total_len != '\0'])
	{
		total_len++;
	}

	return (total_len);
}
