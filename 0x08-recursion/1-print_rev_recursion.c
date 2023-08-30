#include "main.h"

/**
 * _print_rev_recursion - prints reverse string
 * @s: string to be printed
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
