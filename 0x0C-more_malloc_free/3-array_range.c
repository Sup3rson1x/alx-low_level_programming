#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * array_range - is a function that creates array of integers
 * @min: minimum values
 * @max: maximum values
 * Return: ptr to a new array or NULL
 */

int *array_range(int min, int max)
{
	int *array;
	int size;
	int i = 0;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
