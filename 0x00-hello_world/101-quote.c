#include <stdio.h>
#include <errno.h>
/**
 * C program that prints exactly and that piece of
 * art is useful\" - Dora Korpar, 2015-10-19
 * followed by a new line, to the standard error
 */
int main(void)
{
	fprintf( stderr, "%s\n", "and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	return (0);
}
