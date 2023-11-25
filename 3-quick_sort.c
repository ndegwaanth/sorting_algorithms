#include "sort.h"
#include <stdio.h>

/**
 * swap - this functio id used to swap values
 * @n: value to be swap
 * @m: the other value to be swaped
 * Return: null
 */
void swap(int *n, int *m)
{
	int temp;

	temp = *n;
	*n = *m;
	*m = temp;
}

/**
 * lomuto_partition - partion the array
 * @arraythe sub array to sort
 * @low_bound: the lower bound of the array
 * @high_bound: the higher bound of the array
 * Return: the element beign swaped
 */
int lomuto_partition(int *array, int low_bound, int high_bound, size_t size) {
	int pivot = array[high_bound];
	int i = low_bound - 1;
	int j;

	for (j = low_bound; j < high_bound; j++)
	{
		if (array[j] <= pivot) 
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}

	swap(&array[i + 1], &array[high_bound]);
	print_array(array, size);
	return i + 1;
}

/**
 * lumuto - sort the array
 * @array: arrat to be sorted
 * @low_bound: the lower bound
 * @high_bound: lower bound of the array
 * Return: null
 */
void lomuto(int array[], int low_bound, int high_bound, size_t size) {
	if (low_bound < high_bound) 
	{
		int pivot_index = lomuto_partition(array, low_bound, high_bound, size);

		lomuto(array, low_bound, pivot_index - 1, size);
		lomuto(array, pivot_index + 1, high_bound, size);
	}
}
/**
 * quick_sort - this prototype sor the array of integers in ascending
 * order using the quick sort algorithms
 * @array: arrat to be sorted out
 * @size: this is the size of the array
 */
void quick_sort(int *array, size_t size)
{
	int lower_bound, higher_bound;

	lower_bound = 0;
	higher_bound = size - 1;
	lomuto(array, lower_bound, higher_bound, size);
}
