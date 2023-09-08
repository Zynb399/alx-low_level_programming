#include <stdio.h>
/* more headers goes there */
/**
* main - written by soma
*
* Return: Always
*/
/* betty style doc for function main goes there */
int main(void)
{
	int number, second_digit;

	for (number = 0; number != 10; number++)
	{
		for (second_digit = number + 1; second_digit != 10; second_digit++)
		{
			putchar(number + '0');
			putchar(second_digit + '0');
			if (number == 8 && second_digit == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
