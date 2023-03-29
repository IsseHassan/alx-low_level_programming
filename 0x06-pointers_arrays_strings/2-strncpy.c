#include "main.h"
 /**
  * _strncpy - Copies a string.
  *@dest: The destination buffer
  *@src: The source string to be copied.
  *@n:The maximum number of bytes to be copied.
  *Return : A pointer to the resulting string dest.
   */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
