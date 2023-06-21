#include "main.h"

/**
 * _isalpha - Detects an alphabet
 * @c: is the character in question
 * Return: 1 if c is a letter and 0 if c is a number
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
