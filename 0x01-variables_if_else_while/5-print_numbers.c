#include<stdio.h>

/**
 * main - Prints 0 -9 numbers
 *
 * Return: Returns 0 on success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
