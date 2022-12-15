#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '1'; b <= '9'; b++)
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (a == '8' && b == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
