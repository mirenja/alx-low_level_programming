#include "main.h"
/**
* print_times_table - Multiplication table for nine
* @n: int value set
* Return: 0
*/
void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
	for (j = 0; j <= n; j++)
	{
	k = i * j;
	if (n > 15 || n < 0)
	{
	continue;
	}
	else if (k < 10)
	{
	_putchar(k + '0');
	}
	else
	{
	_putchar((k / 10) + '0');
	_putchar((k % 10) + '0');
	}
	}
	_putchar('\n');
	}
}
