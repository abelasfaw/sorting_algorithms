#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
/**
 * swap- swaps two elements of an array
 * @num1: pointer to first number to swap
 * @num2: pointer to second number to swap
 */
void swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
/**
 * selection_sort- sorts an array of integers
 * @array: array to be sorted
 * @size: size of array to be sorted
 */
void selection_sort(int *array, size_t size)
{
	unsigned int counter, counter2, min_index;
	int min;

	if (array != NULL && (size > 1))
	{
		for (counter = 0; counter < size; counter++)
		{
			min = array[counter];
			min_index = counter;
			for (counter2 = counter; counter2 < size; counter2++)
			{
				if (array[counter2] < min)
				{
					min = array[counter2];
					min_index = counter2;
				}
			}
			if (min_index != counter)
			{
				swap(&array[counter], &array[min_index]);
				print_array(array, size);
			}
		}

	}
}
