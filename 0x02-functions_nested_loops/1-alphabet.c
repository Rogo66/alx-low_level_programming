#include "main.h" 
/**
 * print alphabet - Pring your alphabet in lowwercase
 * Return: Always 0(success)
 */
void print_alphabet(void)
{
	int i;

	for (i=97; i<= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
