#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse,
 * followed by a new line
 * Return: 0, always
 */
 
int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
