#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name -print name 
 * @f: pointer to a function
 * @name: name to print
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
