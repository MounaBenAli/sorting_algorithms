#include "sort.h"

/**
 * swap - swaps the place of two integers
 * @xp: pointer to first integer
 * @yp: pointer to second integer
 * Return: nothing
 */

void swap(int *xp, int *yp)
{
	int temp;

	temp = *yp;
	*yp = *xp;
	*xp = temp;
	}

/**
 * bubble_sort - sorts an array of int in ascending order
 * @array: Array to sort
 * @size: Size of the array
 * Return - Nothing sort swap and print
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;

	if (!array)
		return;

	for (i = 0; i < size - 1 ; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
