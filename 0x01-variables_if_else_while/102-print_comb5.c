#include<stdio.h>

/**
 * main - Prints all combinations of two digits number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q, s;

	for (q = 0; q < 100; q++)
	{
		for (s = 0; s < 100; s++)
		{
			if (q < s)
			{
				putchar((q / 10) + 48);
				putchar((q % 10) + 48);
				putchar(' ');
				putchar((s / 10) + 48);
				putchar((s % 10) + 48);
				if (q != 98 || s != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
