#include "main.h"

/**
  * _abs - Computes the absolute value of an integer.
  * @c: The number to be computed.
  *
  * @n: takes in integer type input for fonction
  * Return: Always 0 (success)
  */
int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
