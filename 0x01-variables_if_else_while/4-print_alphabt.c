#include <stdio.h>
/**
* main - Entry Point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int s;

	for (s = 'a'; s <= 'z'; s++)
	{
	if (s != 'q' && s != 'e')
	{
	putchar(s);
	}
	}
	putchar('\n');
return (0);
}
