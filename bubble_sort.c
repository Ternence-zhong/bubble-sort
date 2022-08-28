#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void boubble_sort(int arr[], int size)
{
	int i, j;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (j > j + 1)
			{
				int temp = j;
				j = j + 1;
				temp = j + 1;
			}
		}
	}
}
int main()
{
	//冒泡排序 升序  arr[] = {1,2,3,4,5,6,7,8,9,0};

	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int size = sizeof(arr) / sizeof(arr[0]); //计算得出size是该数组的元素个数，为10；
	boubble_sort(arr, size);

	for (int i = 0; i < size; i++)
	{
		printf("%d  ", i);
	}
	return 0;
}