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
	int n = 0;
	int n2, n3;

	while (n <= 9)
	{
		n2 = 0;
		while (n2 <= 9)
		{
			n3 = 0;
			while (n3 <= 9)
			{
				if (n != n2 && n < n2 && n2 != n3 && n2 < n3)
				{
					putchar(n + 48);
					putchar(n2 + 48);
					putchar(n3 + 48);

					if (n + n2 + n3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				n3++;
			}
			n2++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
