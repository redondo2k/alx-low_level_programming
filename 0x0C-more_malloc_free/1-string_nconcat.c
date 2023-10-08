#include "main.h"

/**
 * *string_nconcat - concatenarte two strings
 * @s1: pointer to first string
 * @s2: ppointer to sec string
 * @n: num of bytes
 *
 * Return: pointer to space in memory containing concatenate string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_lenght, s2_lenght;

	/*check if the strings passed are NULL*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*compute the lenght of the str*/

	for (s1_lenght = 0; s1[s1_lenght] != '\0'; s1_lenght++)
		;

	for (s2_lenght = 0; s2[s2_lenght] != '\0'; s2_lenght++)
		;
	/*Memory reservation for case one and two*/
	str = malloc(s1_lenght + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	/*copy first string into str*/
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	/*copy second string into str*/
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';
	return (str);
}
