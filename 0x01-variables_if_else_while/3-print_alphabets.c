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

	for (character = 'a'; character != '{'; character++)
		putchar(character);
	for (character = 'A'; character != '['; character++)
		putchar(character);
	putchar('\n');
	return (0);
}
