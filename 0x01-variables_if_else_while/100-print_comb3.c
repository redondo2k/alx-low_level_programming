#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 0, n2;

	while (n <= 9)
	{
		n2 = 0;
		while (n2 <= 9)
		{
			if (n != n2 && n < n2)
			{
				putchar(n + 48);
				putchar(n2 + 48);

				if (n + n2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
