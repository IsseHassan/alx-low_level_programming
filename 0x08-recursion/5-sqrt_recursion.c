#include "main.h"
/**
  *_sqrt_recursion - Returns the natural square root of a number.
  * @n: The number to find the square root of.
  *Return: The square root of n,
  */
int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}
/**
  *helper - Recursive helper function to find square root.
  *@n: The number to find the square root of.
  *@i: The starting point for the search.
  * Return: The square root of n
  */
int helper(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (helper(n, i + 1));
}
