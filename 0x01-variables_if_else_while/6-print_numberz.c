#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * follow bay new line
 * Return: Awlays 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0 ; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
