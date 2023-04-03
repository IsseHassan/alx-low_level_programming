#include "main.h"
/**
 * _strchr - Locate a character in a string.
 * @s: pointer to the string to be searched.
 * @c: the character to be located.
 *
 * Return: pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
}
