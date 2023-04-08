#include "main.h"
/**
 * _strstr - Locate a substring.
 * @haystack: pointer to the string to be searched.
 * @needle: pointer to the string to search for.
 *
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[i] != needle[i])
			{
				break;
			}
		}
		if (needle[i] == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
