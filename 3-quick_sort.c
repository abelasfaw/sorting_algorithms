#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
/**
 * swap- swaps two elements of an array
 * @num1: address of first number to swap
 * @num2: address of second number to swap
 */
void swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
/**
 * partition- alignes elements of array so that values less than
 * selected pivot are placed before pivot and values greater than
 * pivot are place after it
 * @array: array to be partitioned
 * @start: starting index of array
 * @end: ending index of array
 * @size: size of array to be partitioned
 * Return: index of pivot element
 */
int partition(int *array, int start, int end, size_t size)
{
	int pivot = array[end];
	int pindex, counter;

	pindex = start;
	for (counter = start; counter < end; counter++)
	{
		if (array[counter] <= pivot)
		{
			if (counter != pindex)
			{
				swap(&array[counter], &array[pindex]);
				print_array(array, size);
			}
			pindex++;
		}
	}
	if (end != pindex)
	{
		swap(&array[end], &array[pindex]);
		print_array(array, size);
	}
	return (pindex);
}
/**
 * quick_sort_recursive- sorts and array recursively
 * @array: array to be sorted
 * @start: starting index of array to be sorted
 * @end: ending index of array to be sorted
 * @size: size of array
 */
void quick_sort_recursive(int *array, int start, int end, size_t size)
{
	int partition_index;

	if (start < end)
	{
		partition_index = partition(array, start, end, size);
		quick_sort_recursive(array, start, (partition_index - 1), size);
		quick_sort_recursive(array, (partition_index + 1), end, size);
	}
}
/**
 * quick_sort- sorts an array using quick sort algorithm
 * @array: array to be sorted
 * @size: size of array to be sorted
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_recursive(array, 0, (size - 1), size);
}

