#include <stdio.h>

/**
 * main - Prints the alphabetin cases
 *
 * Return: 0, always
 */
 
int main(void)
{
char Letters[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(Letters[i]);
	}
	putchar('\n');
	return (0);
}
