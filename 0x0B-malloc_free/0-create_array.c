#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  *create_array -  creates an array of chars,
  *@c: Argument
  *@size: argument
  *Return: It returns a pointer to an array
  */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}