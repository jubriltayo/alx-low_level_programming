#include "main.h"

/**
 * _isalpha - entry point
 *
 * Description: checks for alphabetic character
 *
 * Return: 1 if c is a letter or 0 for otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
