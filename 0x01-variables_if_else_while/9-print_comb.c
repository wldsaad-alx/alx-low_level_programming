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
		if (i == 9)
		{
			putchar('\n');
			break;
		}
		putchar(',');
		putchar(' ');
	}

	return (0);
}
