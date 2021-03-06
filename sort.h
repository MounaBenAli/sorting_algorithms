#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <stdlib.h>



/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


/* Prototypes for print functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Prototypes for mandatory tasks */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);


/* Prototypes for helper functions */
void swap(int *xp, int *yp);
void swap_array(int *array, int a, int b);
int lomuto_partition(int *array, int low, int high, size_t size);
void _quickSort(int *array, int low, int high, size_t size);

#endif
