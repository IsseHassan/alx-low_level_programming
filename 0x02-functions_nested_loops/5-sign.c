#include "main.h"
/**
 * print_sign - prints the sign of a number;
 * @n: Returns 1 and prints + if n is greater than zero;
 * Return: Always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	if (n < 0)
	{
		return (-1);
		_putchar('-');
}
