#include "main.h"

/**
 * _calloc - allocates memory for an array given number of elements and size
 * @memnb: number of elements
 * @size: size of each element
 * Return: Null if error, else pointer to allocated memory
 */

void *_calloc(unsigned int memnb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (memnb <= 0 || size <= 0)
		return (NULL);

	p = malloc(memnb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < memnb; i++)
		p[i] = 0;

	return (p);
}
