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
	char character;

	character = 'z';
	while (character != '`')
	{
		putchar(character);
		character--;
	}
	putchar('\n');
	return (0);
}
