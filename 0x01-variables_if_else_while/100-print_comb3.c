#include <stdio.h>
/**
 * main - Simple program to print two digits
 * Desc: Print all possible combinations of two digits.
 * Numbers must be separated by a commma followed by
 * a space.
 * The two digits must be different.
 * Print only the smallest combination of numbers.
 * Not allowed to use char or printf, puts etc..
 */
int main(void)
{
	int i, j, k;

	i = 0;

	while(i < 100)
	{
		j = i % 10; 
		/* Save the remainder to print single 
		 * digits as two digits*/
		k =  i / 10; /* This will be used to print
				double digits in tens*/
		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		i++;
	}
	putchar('\n');

	return (0);
}

