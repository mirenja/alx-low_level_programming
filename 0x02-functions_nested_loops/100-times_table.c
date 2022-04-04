#include "main.h"
/**
* times_table - Multiplication table for nine
* Return: 0
*/
void print_times_table(int n)
{
	int i, j, k;

	if ( n > 15 || n < 0)
	{
	continue;
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
		for (j = 0; j <= n; j++)
		{
		k = i * j;
		if (k < 10)
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
}
