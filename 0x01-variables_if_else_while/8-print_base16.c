#include<stdio.h>

/**
 * main - Printes numebrs and letters a to f and 0 to 9
 *
 * Return: Returns 0 (success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
