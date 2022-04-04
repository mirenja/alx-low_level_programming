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
	if (n > 15 || n < 0)
	{
	break;
	}
	else if (k < 10)
	{
	k = i * j;
	_putchar(k + '0');
	_putchar(',');
	_putchar(' ');
	}
	else
	{
	_putchar((k / 10) + '0');
	_putchar((k % 10) + '0');
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
	}
}
