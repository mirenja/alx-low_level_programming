#include <stdio.h>
#include "main.h"
/**
* print_to_98 - prints from n to 98
* Numbers seperate by a coma
* @n: start input
* use the std library
* return: 0
*/
void print_to_98(int n)
{
	if (n <  98)
	{
	for (n = n; n < 98; n++)
	{
	printf("%d", n);
	printf("%d\n", 98);
	}
	}
	else if (n == 98)
	{
	printf("%d", 98);
	}
	else
	{
	for (n = n; n >  98; n--)
	{
	printf("%d", n);
	printf("%d\n", 98);
	}
	}
	_putchar('\n');
}

