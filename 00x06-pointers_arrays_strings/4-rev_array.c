#include "main.h"

/**
* reverse_array - function that reverses the content of an array of
*  integers
* @a: pointer to the array
* @n: the number of elements of the array
* Return: none
*/

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}

}
