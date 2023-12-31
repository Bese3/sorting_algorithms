#include "sort.h"


/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * lomuto_partition - Order a subset of an array
 * @array: The array of integers.
 * @size: The size of the array.
 * @left: The starting index of the subset to order.
 * @right: The ending index of the subset to order.
 *
 * Return: The final partition index.
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{

int *pivot, i, j;
i = left - 1;
pivot = array + right;
for (j = left; j < right; j++)
{
if (array[j] < *pivot)
{
i = i + 1;
if (j >= i + 1)
{
swap_ints(array + i, array + j);
print_array(array, size);
}
}
}
if (array[i + 1] > *pivot)
{
i = i + 1;
swap_ints(array + i, pivot);
print_array(array, size);
}
return (i);
}

/**
 * lomuto_sort - Implement the quicksort algorithm through recursion.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * @left: The starting index of the array partition to order.
 * @right: The ending index of the array partition to order.
 *
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
int location;
if (right - left > 0)
{
location = lomuto_partition(array, size, left, right);
lomuto_sort(array, size, left, location);
lomuto_sort(array, size, location + 1, right);
}
}

/**
 * quick_sort - Sort an array of integers in ascending
 * order using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
lomuto_sort(array, size, 0, size - 1);
}
