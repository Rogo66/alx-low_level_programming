#include "main.h"
/*
 * Print alphabet- prints 10 times the alphabet in lowercase
 * Return: Always 0(success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j=1; i<=10; i++)
	{
		for (j=97; j<=122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	return(0);
}
