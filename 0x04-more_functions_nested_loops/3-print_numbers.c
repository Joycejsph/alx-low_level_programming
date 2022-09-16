#include <stdio.h>
#include "main.h"

/**
 *print_numbers - funtion that prints all number from 
 *0 to 9
 *
 *RETURN: returns noyhing
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n< 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
