#include "main.h"
/**
* times_table - Multiplication table for nine
* Return: Always 0
*/
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	k = i * j;
	if (k >= 10 && j < 9)
	{
	_putchar((k / 10) + '0');
	_putchar((k % 10) + '0');
	_putchar(',');
	_putchar(' ');
	}
	else if (k >= 10 && j == 9)
	{
	_putchar((k / 10) + '0');
	_putchar((k % 10) + '0');
	}
	else if (k < 10; &&j < 9)
	{
	_putchar(k + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	}
	else
	{
	_putchar(k + '0');
	}
	}
	_putchar('\n');
	}
}