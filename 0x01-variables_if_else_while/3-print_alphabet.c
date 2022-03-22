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
	putchar(s);
	}
	putchar('\n');
	for (s = 'A'; s <= 'Z'; s++)
	{
	putchar(s);
	}
	putchar('\n');
return (0);
}
