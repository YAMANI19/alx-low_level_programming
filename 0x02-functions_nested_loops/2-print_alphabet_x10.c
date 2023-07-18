#include "main.h"

/**
  * print_alphabet_x10 - Make alphabet x10 times
  *
  * Return:Always 0 (success)
  */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; j++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
