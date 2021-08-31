#include "holberton.h"
/**
 * print_alphabet - Print alphabet in lowercase using only `_putchar`
 * Return: 0
 */
void print_alphabet(void)
{
	char text = 'a';

	while (text <= 'z')
	{
		_putchar(text);
		text++;
	}
	_putchar('\n');
}
