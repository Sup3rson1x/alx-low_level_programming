#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - is a function that allocates memory using malloc
 * @b: size of the memory and bytes to be allocated
 * @ptr - pointer variable
 * Return: a pointer to the allocated memory space
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
