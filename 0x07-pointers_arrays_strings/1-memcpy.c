#include "main.h"

/**
 * _memcpy - copies n bytes from memory area
 * @dest: memory area that receives
 * @src: memory area to be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *d;

	d = dest;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (d);
}
