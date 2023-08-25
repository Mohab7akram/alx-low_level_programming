#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 *Return: destination string (char *ptr)
*/
char *_strcat(char *dest, char *src)
{
	int lenl, len2, i;

	for (lenl = 0; dest[lenl] != '\0'; len2++)
	{

	}

	for (len2 = 0; src[len2] != '\0'; len2++)
	{

	}
	for (i = 0; i <= len2; i++)
	{
		dest[len2 + i] = src[i];
	}

	return (dest);
}
