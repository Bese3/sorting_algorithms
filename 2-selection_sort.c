#include"sort.h"


/**
 * selection_sort - function sorts an array of integers in ascending order
 * using the selection sort algorithm.
 *
 * @array: The array parameter is a pointer to the first element of the array
 * @size: The size parameter represents the number of elements in the array.
 */
void selection_sort(int *array, size_t size)
{
size_t i;
size_t j;
size_t min;
int temp;
for (i = 0; i < size - 1; i++)
{
min = i;
for (j = i + 1; j < size; j++)
{
if (array[min] > array[j])
{
min = j;
}
}
if (min != i)
{
temp = array[i];
array[i] = array[min];
array[min] = temp;
print_array(array, size);
}
}
}
