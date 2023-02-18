#include <stdio.h>

/**
* main - Entry point
*
* Description: '4-print_alphabt.c'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for(i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
