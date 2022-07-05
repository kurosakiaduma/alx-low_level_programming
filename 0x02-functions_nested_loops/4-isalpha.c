#include "main.h"
/**
 * _isalpha - Check if character is an alphabetic character.
 * @a: type int character
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */
int _isalpha(int a)
{
	if ((a > 64 && a < 91) || (a > 96 && a < 123))
		return (1);
	else
		return (0);
}
