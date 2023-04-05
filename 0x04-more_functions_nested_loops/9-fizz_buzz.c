#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints numbers
 * if divisible by 3 prints Fizz
 * if by 5 prints Buzz
 * if by both FizzBuzz is printed
 *
 * Return: 0 (always success)
*/

int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
	if (number % 5 == 0 && number % 3 == 0)
	{
	printf("FizzBuzz");
	}
	else if (number % 3 == 0)
	{
	printf("Fizz");
	}
	else if (number % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%i", number);
	}
	if (number != 100)
	{
	putchar(' ');
	}
	else
	putchar('\n');
	}
	return (0);
}
