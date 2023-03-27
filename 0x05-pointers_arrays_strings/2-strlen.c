#include <string.h>
#include "main.h"
/**
  * _strlen - function that returns the length of a string.
  *@S: parameter
  */
int _strlen(char *s)
{
	int len;

	len = 0 ;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

