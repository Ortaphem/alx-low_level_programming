#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: 0, always
 */
 
int main(void)
{
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
