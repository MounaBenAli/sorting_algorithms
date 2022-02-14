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
