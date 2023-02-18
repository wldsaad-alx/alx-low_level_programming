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
	char hex_digits[] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(hex_digits[i]);
	}
	putchar('\n');

	return (0);
}
