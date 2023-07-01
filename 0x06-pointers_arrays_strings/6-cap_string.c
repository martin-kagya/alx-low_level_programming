#include "main.h"
/**
 * cap_string - capitalizes string
 * @str: string to be capitalized
 * Return: returns capitalized str
 */
char *cap_string(char *str)
{
	int i, j = 0;
	char seperators[] = " \t\n,;.!?\"(){}";
	int flag = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
			{
				str[i] -= 32;
			}
			else
			{
				for (j = 0; seperators[j] != '\0'; j++)
				{
					if (str[i - 1] == seperators[j])
					{
						flag = 1;
					}
				}
				if (flag == 1)
				{
					str[i] -= 32;
					flag = 0;
				}
			}
		}
		i++;
	}
	return (str);
}
