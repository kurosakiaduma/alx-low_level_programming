#include "main.h"
#include <stdio.h>
/**
 * print_number - Print an integer using only _putchar
 * @n: integer to print
 */

void print_number(int n)
{
	int pow;
	int neg;
	int hold;

	neg = 0;
	pow = 1;
	hold = n;
	if (n < 0)
	{
		_putchar('-');
		neg = 1;
	}

	while (hold > 9 || hold < -9)
	{
		pow *= 10;
		hold /= 10;
	}

	while (pow > 0)
	{
		if (pow > 9)
		{
			if (!neg)
				_putchar((n / pow % 10) + '0');
			else
				_putchar((n / pow % 10) * -1 + '0');

			pow /= 10;
		}
		if (pow == 1)
		{
			if (neg)
				_putchar((n % 10) * -1 + '0');
			else
				_putchar(n % 10 + '0');
			pow = 0;
		}
	}
}
