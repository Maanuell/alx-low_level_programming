#include <stdio.h>

/**
 *main -> Random number to the variable n each time it is executed
 *Description: Print last digit of the number stored in the variable
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

		for (i = 0; i < 100; i++)
		{
			for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);

				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
