#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point of code
 * @argc: argument conter
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;

	if (argc <= 2)
	{
		printf("Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
