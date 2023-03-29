#include "main.h"
/**
 * leet - encode into 1337speak
 * @s: input value
 * Return: n value
 */
char *leet(char *s)
{
	int i, j;
	char leet[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (s[i] == leet[j])
			{
				s[i] = num[j];
				break;
			}
		}
	}
	return (s);
}
