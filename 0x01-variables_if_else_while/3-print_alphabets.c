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
	char l = 'a';
	char L = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++
	}

	while (L <= 'Z')
	{
		putchar(L);
		L++;
	}
	putchar('\n');

	return (0);
}
