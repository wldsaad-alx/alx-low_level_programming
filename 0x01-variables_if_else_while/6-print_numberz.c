#include <stdio.h>

/**
* main - Entry point
*
* Description: '5-print_numbers.c'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
