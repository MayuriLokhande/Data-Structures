#include <stdio.h>

void Print(int* arr, int n)
{
	for(int i=0 ; i<n; i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

void BubbleSort(int* arr, int n)
{
	int temp;
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j< n-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}





int main()
{
	int arr[] = {12,56,23,45,14,34};
	int n = 6;
	printf("Before sorting:\n");
	Print(arr,n);
	BubbleSort(arr,n);
	printf("After Sorting:\n");
	Print(arr,n);
	return 0;
}


