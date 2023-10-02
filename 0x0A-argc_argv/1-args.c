#include <stdio.h>

/**
 * main - print number of argu passed
 * @argc: number of commanline argu
 * @argv: pointer to an array of command line argu
 * Return: 0 - success, non-zero-fail
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
