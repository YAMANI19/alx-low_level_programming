#include "holberton.h"
/**
 * _memcpy - Copies memory area
 *
 * @dest: where to copy the memory to
 * @n: the number of bytes
 * @src: the memory area to copy from
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ir;

	for (ir = 0; ir < n; ir++)
		dest[ir] = src[ir];

	return (dest);
}
