#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string
 * @accept: string to match
 * Return: pointer to the byte in s that matches one of the
 * bytes in accept
 * ot NULL if no byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int t, j;
	char *p;

	t = 0;
	while (s[t] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[t])
			{
				p = &s[t];
				return (p);
			}
			j++;
		}
		t++;
	}

	return (0);
}
