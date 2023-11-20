#include"sort.h"
/**
 * selection_sort -   sorts an array of integers
 * in ascending order
 * @array: is the array of integers
 * @size: is the size of the area
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, temp, index;
	int smallest_number;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (i = 0; i < size - 2; i++)
	{
		smallest_number = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (smallest_number > array[j])
			{
				smallest_number = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = smallest_number;
		array[index] = temp;
		print_array(array, size);
	}
}
