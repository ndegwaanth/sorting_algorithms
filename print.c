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

    // Recursive function to print digits
    if (n / 10 != 0)
    {
        print_number(n / 10);
    }

    putchar('0' + n % 10);
}
