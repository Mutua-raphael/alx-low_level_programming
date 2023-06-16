#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * main - Prints any other alphabet but not e and q
 *
 * Return: It shall give 0 if its a success
 */

int main(void)
{
	int i;

	for (i = 1; i < 26; i++)
	{
		if (i != 5 && i != 12)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
