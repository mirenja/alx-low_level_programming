#include <stdio.h>
/**
* main - main block
* prints all base 16 in lowwercse
* Return: 0
*/
int main(void)
{
	int i;
	char c;
	for (i = 0; i < 10; i++)
	{
	putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
	putchar(c);
	}
return (0);
}
