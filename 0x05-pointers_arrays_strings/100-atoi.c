#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if no valid integer is found
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int num = 0;
	int flag = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + sign * (s[i] - '0');
			flag = 1;
		}
		else if (flag == 1)
		{
			break;
		}
		i++;
	}
	return (num);
}
