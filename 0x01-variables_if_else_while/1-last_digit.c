#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a points
 *Description: 'is geater than 5, is 0, is lees than 6 and not 0'
 * Return: Always (Success)
 */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dt = n % 10;

	if (dt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, dt);
	}
	else if (dt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, dt);
	}
	else if (dt < 6 && dt != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, dt);
	}

	return (0);
}
