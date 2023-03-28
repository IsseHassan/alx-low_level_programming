#include <stdio.h>
#include "main.h"
/**
  *print_array -  function that prints n elements of an array of integers
  *@a:  array name
  *@n: is the number of elements OF the array to be printed
  *Followed by a new line.
  *Return: Always 0(succes)
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

