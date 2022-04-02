#include "main.h"
/**
* times_table - Multiplication table for nine
* Return: Always 0
*/
void times_table(void)
{
	int i;
	int j;
	int multiples;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	multiples = i * j;
	_putchar(multiples + '0');
	_putchar(',');
	_putchar(' ');
	}
	}
}
