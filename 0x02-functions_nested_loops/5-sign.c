#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: is the int to check
 * Return: 1 and print + if n is greater than 0
 * prints 0 if the n is zero
 * prints - if the number is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
