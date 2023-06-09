#include "main.h"
/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: pointer to the string to be searched.
 * @accept: pointer to the string of characters to search for.
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);

}
