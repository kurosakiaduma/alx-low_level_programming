#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int rand_num;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		rand_num = (rand() % 125) + 1;
		printf("%c", rand_num);
		total -= rand_num;
	}
	printf("%c", total);

	return (0);
}
