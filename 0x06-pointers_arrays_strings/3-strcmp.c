#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: string differnce in ASCII
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0;

	while (s1[index] && s2[index] && s1[index] == s2[index])
	{
		index++;
	}
	return (s1[index] - s2[index]);
}
