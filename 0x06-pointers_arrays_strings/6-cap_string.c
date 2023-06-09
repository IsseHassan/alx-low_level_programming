#include "main.h"
/**
  *cap_string - capitalizes all words of a string.
  *@s: input
  *Return: A pointer to the converted string.
  */
char *cap_string(char *s)
{
	int i = 0;
	char *sep =  "\t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	for (i = 1; s[i] != '\0';  i++)
	{
		int j;

		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i - 1] == sep[j] && s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
				break;
			}
		}
	}
	return (s);
}
