#include<stdio.h>

/**
 * main - Prints numbers from 0 to 9 characters
 *
 * Returns: 0 if all has succeded
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
