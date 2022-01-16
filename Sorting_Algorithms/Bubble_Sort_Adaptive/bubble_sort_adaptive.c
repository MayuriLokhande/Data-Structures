#include <stdio.h>

void Print(int* arr, int n)
{
	for(int i=0; i<n; i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

void BubbleSort_Adaptive(int* arr, int n)
{
	int isSorted =0;
	int temp;
	for(int i=0; i<n-1; i++)
	{
		printf("Working on pass: %d\n", i+1);
		isSorted = 1;
		for(int j=0; j<n-1-i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				isSorted = 0;
			}
		}
		if(isSorted)return;
	}
}
int main()
{
	int arr[]={1,2,3,4,5};
	int n=5;
	printf("Before sorting\n");
	Print(arr,n);
	BubbleSort_Adaptive(arr, n);
	printf("After sorting\n");
	Print(arr,n);
	return 0;
}




