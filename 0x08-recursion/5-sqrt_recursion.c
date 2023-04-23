#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *@num: square root value
 *@n: int input
 *Return: number
*/
int root(int n, int num);
int _sqrt_recursion(int n)
{
	return (root(n, 1));
}
/**
 * root - functioon that finds the square root value
 *
 *@n: n to find the square root
 *@num:square root value
 *
 *Return: Number
*/
int root(int n, int num)
{
	if (num * num == n)
	{
		return (num);
	}
	else if (num * num < n)
	{
		return (root(n, num + 1));
	}
	else
		return (-1);
}
