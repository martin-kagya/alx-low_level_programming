#include "main.h"
/**
 * string_toupper - converts lower to uppercase
 * @str: the string to be operated on
 * Return: returns str which is the string converted
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
