#include "main.h"
/**
 * _islower - Return 1 if letter is lowercase, 0 if not.
 * @a: char type letter
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int a)
{
	if (a > 96 && a < 123)
		return (1);
	else
		return (0);
}
