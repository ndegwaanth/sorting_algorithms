#include "sort.h"
/**
 * print_number - implement the display of the the elements
 * @n: element to display
 * Return: null
 */
void print_number(int n)
{
    if (n < 0)
    {
        putchar('-');
        n = -n;
    }

    /*Recursive function to print digits*/
    if (n / 10 != 0)
    {
        print_number(n / 10);
    }

    putchar('0' + n % 10);
}
/**
 * selection - this function is used to sort array of integers in ascending order using the selection algorithms
 * @array: this is the array to br sorted
 * @ size: this is the size of the array
 * Return: array
 */
void selection_sort(int *array, size_t size)
{
	size_t j, i;
	size_t k, temp, m;

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
		}
		
		for (m = 0; m < size; m++)
		{
			print_number(array[m]);
			putchar(' ');
		}
		putchar('\n');
	}
}
