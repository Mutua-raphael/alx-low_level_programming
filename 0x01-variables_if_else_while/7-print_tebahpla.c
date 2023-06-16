#include<stdio.h>

/**
 * main - Prints the alphabets in reverse and in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphab;

	for (alphab = 'z'; alphab >= 'a'; alphab--)
	{
		putchar(alphab);
	}
	putchar('\n');
	return (0);
}
