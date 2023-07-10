#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copies a string to a pointer
 * @str: string to be copied
 * Return: returns Null when theres an error or string in success
 */
char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	s[j] = '\0';
	return (s);
}
