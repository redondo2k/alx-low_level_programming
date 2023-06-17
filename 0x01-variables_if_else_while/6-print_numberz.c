#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lower then in upper case
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}
