#include "main.h"
/**
* _abs - absolute value of an int
* @n: the int to check
* Return: always 0
*/
int _abs(int n)
{
	if (n < 0)
	{
	return (n * (-1));
	}
	else if (n == 0)
	{
	return (0);
	}
	else
	{
	return (n);
	}
}
