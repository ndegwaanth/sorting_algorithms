#include <stdio.h>
#include "sort.h"
#include <stdlib.h>

void print_my_array(int n)
{
	if (n < 0)
	{
		putchar(' ');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_my_array(n / 10);
	}

	putchar('0' + n % 10);
}
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
	size_t i, j, k;

	for (i = 0; i <= size - 1; i++)
	{
		for (j = 0; j <= size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				for (k = 0; k < size; k++)
				{
					print_my_array(array[k]);
					putchar(' ');
				}
				putchar('\n');
			}
		}
	}
}
