#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 * @: input number as integer
 * Return:  Always 0
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
	return (0);
}
