#include "main.h"
/**
* times_table - Multiplication table for nine
* Return: Always 0
*/
void times_table(void)
{
	int i;
	int j = 9;
	in multiples;

	for (i = 0; i <= 9; i++)
	{
	multiples = j * i;
	}
	_putchar(multiples + '0');
}
