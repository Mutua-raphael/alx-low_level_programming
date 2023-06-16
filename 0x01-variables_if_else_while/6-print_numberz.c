#include<stdio.h>
/**
 * main - Print numbers of base 10.
 *
 * Return: Always give 0 if all is well
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
