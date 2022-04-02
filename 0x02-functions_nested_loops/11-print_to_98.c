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
	int i;

	if (n > 98)
	{
	for (i = n; i >= 98; i--)
	{
		if (i != n)
		{
		printf(",");
		}
	printf("%d", i); 
	} 
	}
	else
	{
	for (i = n; i <= 98; i++)
	{
		if (i != n)
		{
		printf(",");
		}	
	printf("%d", i);
	}/*cloing for second if8*/
	}/*else closing*/
	_putchar('\n');	
}

