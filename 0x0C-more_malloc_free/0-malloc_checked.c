#include "main.h"

/**
 * malloc_checked - allocate memory using malloc.
 * Description: If malloc fails, terminate process with status 98.
 * @a: unsigned int memory size to allocate
 * Return: void pointer to malloc'd memory space
 */

void *malloc_checked(unsigned int a)
{
	void *p;

	p = malloc(a);
	if (p == NULL)
		exit(98);

	return (p);
}
