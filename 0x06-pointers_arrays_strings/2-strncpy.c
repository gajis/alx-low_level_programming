#include "main.h"
/**
 * _strncpy - Function that copies a string
 * @dest: pointer
 * @src: pointer
 * @n: integer
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	int src_len = 0;

	while (src[i++])
		src_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = src_len; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
