#include "main.h"

/**
  * print_alphabet_x10 - Make alphabet x10 times
  *
  * Return:Always 0 (success)
  */
void print_alphabet_x10(void)
{
	int line, j;

	for (line = 0; line <= 9; line++)
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
}
