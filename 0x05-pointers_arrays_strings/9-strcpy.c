#include "main.h"

/**
 * *_strcpy - copies pointed string
 * @dest: char type string
 * @src: char type string
 * Description: copy the string by pointer src to dest
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
