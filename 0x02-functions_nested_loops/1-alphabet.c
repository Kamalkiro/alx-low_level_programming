#include "main.h"
/**
 * print_alphabets - To print from a to z
 *
 * Return Always 0
 */
void print_alphabets(void)
	{
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);


		_putchar('\n');
	}
