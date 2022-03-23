#include <stdio.h>
/**
* main- main block
* prints all the hex numbers
* Return: 0
*/
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(i);
	}
	for (c = 'a'; c < 'g'; c++)
	{
	putchar(c);
	}
putchar('\n');
return (0);
}
