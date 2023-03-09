#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Finds the natural sqare root of inputted number
 * @num: Number to find the square root of.
 * @root: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root
 *	If the number does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
	
