#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowe case
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l == 'q' || l == 'e')
			l++;
		putchar(l);
		l++;
	}
	putchar('\n');

	return (0);
}
