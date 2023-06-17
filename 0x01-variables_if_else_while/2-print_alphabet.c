#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet in lower case
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	putchar("\n");
	return (0);
}
