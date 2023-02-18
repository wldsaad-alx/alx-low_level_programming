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

	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('9');

	return (0);
}
