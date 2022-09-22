#include "main.h"

/**
 * _strcat - concatenate two strings but add inputted number of bytes
 * @dest: srting to be appende upon
 * @src: string to be completed at te end of the dest
 * @n: integer parameter to compare index to
 * Return: returns new concatenated string 
 */

char*_strncat(char*dest, chara8src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	
	for (index = 0; src[index] && index < n ; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
