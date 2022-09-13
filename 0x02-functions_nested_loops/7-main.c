#include "main.h"
#include <stdio.h>

int main(void)
{
	print_last_digit(98);
	print_last_digit(0);
	print_last_digit(-1024);
	_putchar(print_last_digit(-1024) + '0');
	return(0);
}
