#include "main.h"

/**
*print_most_numbers - prints 0-9 whithout 2 and 4
*only use _putchar twice
*Return: void
*/

void print_most_numbers(void)
{
	char numb;

	for (numb = '0'; numb <= '9'; numb++)
	{
	if (numb == '2' || numb == '4')
	_putchar(numb);
	}
	_putchar('\n');
}
