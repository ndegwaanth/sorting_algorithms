#include <stdio.h>
#include "sort.h"
#include <stddef.h>

/**
 * bubble_sort - this prototype is used to sort
 * an array in ascending order using bubble sort
 * @array: this is the array that is going to be sorted out
 * @size: this the length os the array
 * Return: return the array
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	for (i = 0; i <= size - 1; i++)
	{
		for (j = 0; j <= size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				putchar(' ');
				putchar('\n');
			}
		}
	}
}
