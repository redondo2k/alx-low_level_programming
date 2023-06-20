#include"main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example table
 * 0, 0, 0, ..
 * 0, 1, 2, ..
 */

void times_table(void)
{
	int num, mlt prd;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (num = 0; num <= 9; mlt++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mlt;

			if (prd <= 9)
				_putchar(' ');
			else
				_putchar((prd / 10) + 48)i;
			_putchar((prd % 10) + 48);
		}
		_putchar('\n');
	}
}
