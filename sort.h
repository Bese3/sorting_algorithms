#ifndef SORT_H
#define SORT_H
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

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

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void swapper(listint_t **head, listint_t **Node_1, listint_t *Node_2);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void swap_ints(int *a, int *b);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);
void shellSort(int *array, int n, size_t size);
void shell_sort(int *array, size_t size);


#endif/*SORT_H*/