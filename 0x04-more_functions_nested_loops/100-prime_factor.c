#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Find and print the largest prime factor of the number
 * 612852475143 followed by a new line.
 * Return: 0
 */
int main(void)
{
	int n;
	long num = 612852475143;

	for (n = (int) sqrt(num); n > 2; n++)
	{
		if (num % n == 0)
		{
			printf("%d\n", n);
			break;
		}
	}

	return (0);
}
