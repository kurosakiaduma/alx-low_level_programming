#include <stdio.h>
#define MAX 10000000000
/**
 * main - main block
 * Description: Find and print the first 98 fibonacci
 * numbers starting with 1 and 2.
 * Numbers should be comma and space separated.
 * Return: 0
 */
int main(void)
{
	unsigned long int i1 = 0, fb1 = 1, i2 = 0, fb2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", fb1, fb2);
	for (count = 2; count < 98; count++)
	{
		if (fb1 + fb2 > MAX || i2 > 0 || i1 > 0)
		{
			hold1 = (fb1 + fb2) / MAX;
			hold2 = (fb1 + fb2) % MAX;
			hold3 = i1 + i2 + hold1;
			i1 = i2, i2 = hold3;
			fb1 = fb2, fb2 = hold2;
			printf("%lu%010lu", i2, fb2);
		}
		else
		{
			hold2 = fb1 + fb2;
			fb1 = fb2, fb2 = hold2;
			printf("%lu", fb2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
