#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void bubbleSort(int* const array, const int size);

int main()
{
	int a[SIZE] = { 2,4,6,8,10,12,89,68,45,37 };
	int i;

	printf("Data items in original order\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}

	bubbleSort(a, SIZE);

	printf("\nData item in ascending order\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
}
void bubbleSort(int* const array, const int size)
{
	void swap(int* element1ptr, int *element2ptr);
	int i, j;

	for (i = 0; i < size-1; i++)
	{
		for (j = 0; j < size-1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
			}
		}
	}
}
void swap(int* element1ptr,int  *element2ptr)
{
	int t =* element1ptr;
	*element1ptr = *element2ptr;
	*element2ptr = t;
}