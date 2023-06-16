#include<stdio.h>

/**
 * main - This prints the alphabets in lowercase abd uppercase
 *
 * Return: 0 Means its a success
 */
int main(void)
{
	char alphab[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	for (i = 0; i < 52; i++)
	{
		putchar(alphab[i]);
	}
	putchar('\n');
	return (0);
}
