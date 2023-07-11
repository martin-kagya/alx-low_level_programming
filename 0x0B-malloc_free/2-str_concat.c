#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function to merge string
 * @s1: first string
 * @s2: second string
 * Return: return NULL if both strings are empty and
 * the concatednated string if successful
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		str[k] = s1[k];
	}
	for (l = 0; l < j; l++)
	{
		str[k + l] = s2[l];
	}
	str[k + l] = '\0';
	return (str);
}
