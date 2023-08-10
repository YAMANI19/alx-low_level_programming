#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocate memory with malloc
 * @b: unsigned int type
 * Return: return pointer
 */
void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
