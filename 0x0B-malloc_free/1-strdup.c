#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *_strdup -  returns a pointer to a newly allocated space in memory,
  *@str: string to be duplicated
  *Return: pointer to duplicated string
  */

char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i, len = 0;

	if (str == 0)
		return (NULL);
	while (str[len] != '\0')
		len++;

	dup_str = malloc(sizeof(char) * (len + 1));
	if (dup_str == 0)
		return (NULL);
	for (i = 0; str[i]; i++)
		dup_str[i] = str[i];
	return (dup_str);
}
