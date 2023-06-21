#include "main.h"

/**
 * _islower - checks if a character is lower or uppercase
 * @c: is the character in question
 * Return: 1 is the character if lowercase and 0 for uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
