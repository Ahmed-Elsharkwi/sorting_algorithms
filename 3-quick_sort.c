#include"sort.h"
void Quick_sort(int *array, int lb, int ub, int size);
int Lomuto(int *array, int lb, int ub, int size);
/**
 * quick_sort - sort the list with quick sort algrothime
 * @array: is a pointer for the list
 * @size: is the size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	Quick_sort(array, 0, size - 1, size);
}

/**
 * Quick_sort - sort the list with quick sort
 * @array: is a pointer
 * @lb: is the first element in the list
 * @ub: is the last element in the list
 * @size: is the size of the list
 * Return: void
 */
void Quick_sort(int *array, int lb, int ub, int size)
{
	int loc;

	if (lb < ub)
	{
		loc = Lomuto(array, lb, ub, size);
		Quick_sort(array, lb, loc - 1, size);
		Quick_sort(array, loc + 1, ub, size);
	}
}
/**
 * Lomuto -  partition scheme
 * @array: is a pointer
 * @lb: is an int
 * @ub: is an int
 * @size: is an int
 * Return: location of the piviot
 */
int Lomuto(int *array, int lb, int ub, int size)
{
	int piviot = array[ub];
	int i = lb - 1;
	int j;
	int temp;

	for (j = lb; j <= ub; j++)
	{
		if (array[j] < piviot)
		{
			i++;
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	temp = array[i + 1];
	array[i + 1] = array[ub];
	array[ub] = temp;
	if (array[i + 1] != array[ub])
		print_array(array, size);
	return (i + 1);
}
