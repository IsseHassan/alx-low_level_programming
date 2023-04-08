#include "main.h"
 /**
  * _strncat - Concatenates two strings.
  *@dest:The destination string.
  *@src:The source string to be appended to dest
  *@n:The maximum number of bytes from src to be used
  *Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
