#include "main.h"
/**
  *swap_int - function that swaps the values of two integers.
  *@a: pointer variable
  *@b: pointer variable
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

