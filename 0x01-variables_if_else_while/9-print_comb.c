#include<stdio.h>

/**
 * main - Prints all possible combinations of single digits numbers
 *
 * Return: Always 0if the program is well written
 */

int main(void)
{
	int p;

	for (p = 48; p < 58; p++)
	{
		putchar(p);
		
		if (p != 57)
		{
			putchar(',');
			putchar('');
		}
	}
	putchar('\n');
	return (0);
}
