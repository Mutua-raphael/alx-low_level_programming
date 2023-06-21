#include<stdio.h>

/**
 * main - lists numbers below 1024 excluded
 * lists numbers that are multiples of 3 and 5
 * Return: Always 0 is a success
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
