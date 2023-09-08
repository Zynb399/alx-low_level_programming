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
	int character;

	for (character = 0; character != 10; character++)
	{
		putchar(character + '0');
		if (character != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
