#include "main.h"

/**
 * main - print the alphabet in lowercase
 *
 * Return: void.
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);

	_putchar('\n');
}
