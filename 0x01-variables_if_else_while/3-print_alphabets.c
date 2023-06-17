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

	/*prints a - z*/
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}

	/*prints A - Z*/
	while (L <= 'Z')
	{
		putchar(L);
		L++;
	}
	putchar('\n');

	return (0);
}
