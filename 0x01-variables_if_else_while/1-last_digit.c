#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - prints a text according to num
 * Return: Always (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	/* your code goes there */
	if (lastd > 5)
	{
		printf("The last digit of %d is %d and is greater than 5", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("The last digit of %d is %d and is 0", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("The last digit of %d is %d and is less than 6 and not 0", n, lastd);
	}

	return (0);
}
