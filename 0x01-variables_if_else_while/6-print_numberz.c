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
	int number;

	for (number = 0; number != 10; number++)
		putchar(number + '0');
	putchar('\n');
	return (0);
}
