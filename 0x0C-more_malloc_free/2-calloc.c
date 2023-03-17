#include "main.h"
#include <stdlib.h>

/**
 * _memset - is a function that copies char
 * @s: string input
 * @b: char to copy
 * @n: number of bytes to copy char b
 * Return: pointer to the memory area string output
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}

/**
 * _calloc - is a function that allocates memory for array using malloc
 * @nmemb: allocates for number of elements in array
 * @size: size of each byte to allocate
 * Return: pointer to new allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
