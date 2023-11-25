#include "sort.h"
/**
 * selection - this function is used to sort array of integers in ascending order using the selection algorithms
 * @array: this is the array to br sorted
 * @ size: this is the size of the array
 * Return: array
 */
void selection_sort(int *array, size_t size)
{
	size_t j, i;
	size_t k, temp;

	for (i = 0; i < size; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[k])
			{
				k = j;
			}
		}
		if ( k != i)
		{
			temp = array[i];
			array[i] = array[k];
			array[k] = temp;
			print_array(array, size);
		}
	}
}
