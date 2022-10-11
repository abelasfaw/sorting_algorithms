#include <stdlib.h>
#include "sort.h"
/**
 * swap-swap two elements of an array
 * @num1: address of number 1
 * @num2: address of number 2
 */
void swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
/**
 * bubble_sort- sort elements of an array using bubble_sort algorithm
 * @array: array to be sorted
 * @size: size of array to sort
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int counter1, counter2;

	if (array != NULL && (size > 1))
	{
		for (counter1 = 0; counter1 < (size - 1); counter1++)
		{
			for (counter2 = 0; counter2 < (size - counter1 - 1); counter2++)
			{
				if (array[counter2] > array[counter2 + 1])
				{
					swap(&array[counter2], &array[counter2 + 1]);
					print_array(array, size);
				}
			}
		}
	}
}
