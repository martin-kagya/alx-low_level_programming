#include "main.h"
/**
 * _strspn - gives the length of a substring
 * @s: string input to the function
 * @accept: input character to locate in string s
 * Return: return pointer to the c position
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, flag;
	char *start = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				i++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (flag == 0)
			break;
	}
	return (i);
}
