#include "sort.h"
/**
* swap - swaps the place of two integers
* @xp: pointer to first integer
* @yp: pointer to second integer
* Return: nothing
*/

void swap(int *xp, int *yp)
{
	int temp = *xp;

	*xp = *yp;
	*yp = temp;
}

/**
 * selection_sort - sorts via selection sort algo
 * @array: Array to sort
 * @size: Size of the array
 * Return - Nothing select element, swap and print
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
	min = i;
	for (j = i + 1; j < size ; j++)
		if (array[j] < array[min])
		min = j;
	if (i != min)
	{
		swap(&array[min], &array[i]);
		print_array(array, size);
	}
	}
}
