#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: is an array of integers
 * @size: is the size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t j = 0, i, flag, temp, num;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (i = 1; i < size; i++)
	{
		flag = 0;
		for (j = 0; j < size - i; j++)
		{
			num = j + 1;
			if (array[j] > array[num])
			{
				temp = array[j];
				array[j] = array[num];
				array[num] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			return;
	}
}

