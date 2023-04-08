#include "main.h"
/**
  * _strspn - Get the length of a prefix substring.
  * @s: pointer to the string to be searched.
  * @accept: pointer to the string of characters to search for.
  *
  * Return: the number of bytes
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *p = accept;

	while (*s)
	{
		while (*p && (*p != *s))
			p++;
		if (*p)
		{
			len++;
			p = accept;
		}
		else
			return (len);
		s++;
	}
	return (len);
}
