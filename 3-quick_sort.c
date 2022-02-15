#include "sort.h"

/**
 * lomuto_partition - splits the array using the Lomuto's partition scheme
 * @array: the array to split
 * @low: first index of array
 * @high: lowest index of array
 * @size: size of array
 * Return: position of the pivot in the array
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{

int pivot, i, j;

/*select the rightmost element as pivot*/
pivot = array[high];
/*pointer for greater element*/
i = low - 1;
/*Traverse each element of the array and compare with pivot*/
for (j = low; j <= high; j++)
{
if (array[j] <= pivot)
{
i++;
if (i != j)
{
swap_array(array, i, j);
print_array(array, size);
}
}
}
return (i);
}

/**
* swap_array - swaps values in array
* @array: array to swap
* @a: first integer to swap
* @b: second integer to swap
* Return: nothing
*/

void swap_array(int *array, int a, int b)
{
int temp;

temp = array[a];
array[a] = array[b];
array[b] = temp;
}

/**
* _quickSort - sorts an array of integers in ascending order
* using the Quick sort algorithm
* @array: array to sort
* @low: first index of array
* @high: lowest index of array
* @size: size of array
* Return: nothing pivot, partition and recusive calls to sort sub-arrays
*/

void _quickSort(int *array, int low, int high, size_t size)
{
int par;
if (low < high)
{
/**find the pivot element such that**/
/*elements smaller than pivot are on left of pivot*/
/*elements greater than pivot are on right of pivot*/

par = lomuto_partition(array, low, high, size);
/*recursive call on the left of pivot*/
_quickSort(array, low, par - 1, size);

/*recursive call on the right of pivot*/
_quickSort(array, par + 1, high, size);
}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 *
 * @array: array to sort
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
int low;
int high;
if (!array || size == 0)
return;

low = 0;
high = size - 1;

_quickSort(array, low, high, size);

}
