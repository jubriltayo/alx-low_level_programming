#include "main.h"

/**
 * _isupper - checks uppercase letters
 * @c: character checked
 * Return: 1 for success and 0 for otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
