#include<stdio.h>

/**
 * main - Prints the alphabet
 *
 * Return: 0 Means success
 */
int main(void)
{
	char alphab[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphab[i]);
	}
	putchar('\n');
	return (0);
}
