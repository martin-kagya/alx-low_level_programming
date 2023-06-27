#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: Value of converted string
 */
int _atoi(char *s)
{
	int result, j, i;

	result = 0;
	j = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			j *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (result < 0)
				result = (result * 10) - (s[i] - '0');
			else
				result = (s[i] - '0') * -1;

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (j < 0)
		result *= -1;

	return (result);
}
