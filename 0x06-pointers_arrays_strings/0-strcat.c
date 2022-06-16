#include "main.h"
#include <stdio.h>
/**
 * _strcat - to join two strings
 *
 * @dest: str1
 * @src: srt2
 *
 * Returns: pointer
 */

char *_strcat(char *dest, char *src)
{
	int lenSrc = 0, lenDest = 0;

	while (*(dest + lenDest) != '\0')
		lenDest++;

	/* While true */
	while (1 == 1)
	{
		*(dest + lenDest) = *(src + lenSrc);
		if (*(src + lenSrc) == '\0')
			break;

		lenSrc++;
		lenDest++;
	}

	return (dest);
}
