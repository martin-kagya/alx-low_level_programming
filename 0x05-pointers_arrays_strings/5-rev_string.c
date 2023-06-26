#include "main.h"
/**
 * rev_string - reverses the string
 * @s: - string to be reversed
 * Return: Always 0
 */
void rev_string(char *s)
{
	char temp;
	int len, len1;

	len = 0;
	len1 = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;
	for (; len1 >= len / 2; len1--)
	{
		temp = s[len1];
		s[len1] = s[len - len1 - 1];
		s[len - len1 - 1] = temp;
	}
}
