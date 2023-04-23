#include "main.h"
/**
 * is_prime_number - checks if the number is prime
 * @n: input integer
 * @num: integer comparison
 * Return: 1 (success), 0 (fail)
*/
int prime_checker(int n, int num);
int is_prime_number(int n)
{
	return (prime_checker(n, 2));
}
/**
 * prime_checker - checks if the number recieved is from primes
 *
 *@n: input integer
 *@num: integer comparison
 *
 *Return: integer
*/
int prime_checker(int n, int num)
{
	if (num >= n && num > 1)
	{
	return (1);
	}
	else if (n <= 1 || n % num == 0)
	{
	return (0);
	}
	else
		return (prime_checker(n, num + 1));
}
