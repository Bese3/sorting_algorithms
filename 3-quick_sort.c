#include"sort.h"

/**
 * partition - selects a pivot element, and rearranges the elements such
 * that all elements smaller than the pivot are placed before it
 * and all elements greater than the pivot are placed after it.
 *
 * @arr: The parameter "arr" is an array of integers that we want to partition.
 * @low: The parameter "low" represents the starting index of the array
 * @high: The parameter "high" represents the index of the highest element
 *
 * Return:  the index of the pivot element after partitioning the array.
 */
int partition(int arr[], int low, int high)
{
int temp;
int j;
int pivot = arr[high];
int i = low - 1;

for (j = low; j < high; j++)
{
if (arr[j] < pivot)
{
i++;
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
temp = arr[i + 1];
arr[i + 1] = arr[high];
arr[high] = temp;
return (i + 1);
}

/**
 * quickSort - function recursively sorts an array using the quicksort
 * algorithm.
 *
 * @arr: The array to be sorted. It is passed as a pointer
 * @low: The "low" parameter represents the starting index of the subarray
 * @high: The "high" parameter represent the last element
 * @size: The parameter "size" represents the size of the
 * array that is being sorted.
 *
 */
void quickSort(int arr[], int low, int high, int size)
{
static int i = 1;
if (low < high)
{
int pivot = partition(arr, low, high);
quickSort(arr, low, pivot - 1, size);
print_array(arr, size);
if (i < 2)
{
print_array(arr, size);
i++;
}
quickSort(arr, pivot + 1, high, size);
}
}

/**
 * quick_sort - is a wrapper function that calls the quickSort() function
 *
 * @array: The array parameter is a pointer to the array
 *
 * @size: The size parameter represents the number of elements
 */
void quick_sort(int *array, size_t size)
{
quickSort(array, 0, size - 1, size);
}
