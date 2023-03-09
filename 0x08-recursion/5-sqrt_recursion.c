#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural sqare root of inputted number
 * @num: Number to find the square root of.
 * @root: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root
 *	If the number does not have a natural square root - -1.
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
