#include "main.h"
#include <stdio.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer tosecond
 * @n: number of bytes frm n2 to concatenate
 * Return: pointer to space in memory containing concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s11, s22;

	/*check if the strings passed are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	s2 = "";
	/*compute the lenght of the string*/

	for (s11 = 0; s1[s11] != '\0'; s11++)
		;

	for (s22 = 0; s2[s22] != '\0; s22++)
		;
	/*memory reservation-for case 1 & 2*/
	str = malloc(s11 + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	/*copy first string into str*/
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	/*copy the second one*/
	for (j = 0; j < n; j++)
	{
		str[i] = s2[i];
		i++;
	}

	str[i] = '\0';
	return (str);
}
