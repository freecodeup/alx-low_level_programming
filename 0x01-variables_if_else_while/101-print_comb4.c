#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '1'; b <= '9'; b++)
		{
			for (c = '2'; c <= '9'; c++)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if ((a == '7' && b == '8') && (b == '8' && c == '9'))
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
