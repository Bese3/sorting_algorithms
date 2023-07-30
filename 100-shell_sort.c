#include"sort.h"

int knuth_sequence(int n)
{
  if (n < 0) 
    return 0;
  else 
    return ((3 * knuth_sequence(n - 1)) + 1);
}
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

void shellSort(int *array, int n, size_t size)
{
    int gap;
    printf("before\n");
    gap = knuth_sequence(n);
        printf("after\n");
        for (int j = gap; j < n; j++)
        {
            for (int i = j - gap; i >= 0; i - gap)
            {
              if (array[i + gap] > array[i])
                  break;
              else
              {
                swap_ints(array[i + gap], array[i]);
                print_array(array, size);
              }

            }
        }
    
}

void shell_sort(int *array, size_t size)
{
    size_t i;
    if (array == NULL || size < 2)
        return;
    for (i = size - 1; i >= 0; i--)
    {
        shellSort(array, i, size);
    }
    
}

