#include <stdio.h>
/**
 * main - Prints the numbers from 00 to 99
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar('\n');
			}
		}
	}
	return (0);
}
