#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastDigit = n % 10;

        if (lastDigit > 5)
        {
                printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
        }
        else if (lastDigit == 0)
        {
                printf("Last Digit of %d is %d zero\n", n, lastDigit);
        }
        else if (lastDigit < 6 && lastDigit > 0)
        {
                printf("Last digit of %d is %d less than 6 and not zero\n", n, lastDigit);
        }
        else
        {
                printf("mistake\n");
        }
	return (0);
}
