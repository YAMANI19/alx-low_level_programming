#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int c, k;
	char tmp;

	for (l = 0 ; s[l] != '\0'; ++l)
		;

	for (k = 0; k < (l / 2); k++)
	{
		tmp = s[k];
		s[k] = s[l - 1 - k];
		s[l - 1 - k] = tmp;
	}
}
