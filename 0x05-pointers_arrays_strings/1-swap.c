#include "main.h"

/**
  * swap_int - Swaps the values of two integers
  *
  * @a: An integer
  * @b: Another integer
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int simo;

	simo = *a;
	*a = *b;
	*b = simo;
}
