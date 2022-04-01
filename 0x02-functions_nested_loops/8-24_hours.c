#include "main.h"
/**
* jack_bauer - prints every minute of the day
* Return: Always 0
*/
void jack_bauer(void)
{
	int i;
	int j;

	for ( i = 00; i <= 23; i++)
	{
	for (j = 00; j <= 60; j++)
	{
	_putchar (i + '0');
	_putchar (':');
	_putchar (j + '0'); 
	_putchar ('\n');
	}
	} 
}
