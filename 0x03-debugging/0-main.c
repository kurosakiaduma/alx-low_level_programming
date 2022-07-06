#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);
}

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%i is positive\n", i);
	else if (i < 0)
		printf("%i is negative\n", i);
	else
		printf("%i is zero\n", i);
}
