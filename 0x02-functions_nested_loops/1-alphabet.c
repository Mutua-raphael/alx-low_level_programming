#include "main.h"

/**
 * print_alphabet - print lowercase alphabets letters
 */

void print_alphabet(void)
{
	char alphab;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
		_putchar(alphab);

	_putchar('\n');
}
