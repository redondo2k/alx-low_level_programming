#include "main.h"

/**
 * strcpy - copies the string pointed to by src,
 * ncluding the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: char type string
 * @src: char type string
 * Description: copy the string pointed to by pointer src
 * Return: pointer to 'dest'
 */

char_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
