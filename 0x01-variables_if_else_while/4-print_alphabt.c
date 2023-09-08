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
	{
		if (character == 'q' || character == 'e')
		continue;
		putchar(character);
	}
	putchar('\n');
	return (0);
}
