#include "main.h"

/**
 * *_strchr - fills memory with a constant byte
 * @s: pointer to put the const
 * @c: const
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	int t;

	for (t = 0; s[t] >= '\0' ; t++)
	{
		if (s[t] == c)
		{
			return (s + t);
		}
	}

	return ('\0');
}
