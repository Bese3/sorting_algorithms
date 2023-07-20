#include<stdio.h>
#include<stdlib.h>
#include"sort.h"



/**
 * bubble_sort - function sorts int using Bubble sort algorithm
 *
 * @array: The "array" parameter is a pointer to the arraay of int
 *
 * @size: The parameter "size" represents the No of elements in array
 *
 */
void bubble_sort(int *array, size_t size)
{

int swap;
unsigned long int j;
unsigned long int i;
for (j = 0; j < size; j++)
{
for (i = 0; i < size - 1; i++)
{
if (array[i] > array[i + 1])
{
swap = array[i];
array[i] = array[i + 1];
array [i + 1] = swap;
print_array(array, size);
}
}
}
}
