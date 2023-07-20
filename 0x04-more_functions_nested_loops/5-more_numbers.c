#include "main.h"

/**
 * more_numbers - 0 - 14 ten times
 *  only use _putchar three time
 * Return: Always 0 (success)
 */

void more_numbers(void)
{

int num, tm;
	for (num = 1; num <= 10; num++)
	{
		for (tm = 0; tm <= 14; tm++)
		{
			if (tm >= 10)
			_putchar('1');
			_putchar(tm % 10);
		}
			_putchar('\n');
		}
}
