#include <stdio.h>

void Print(int* arr, int n)
{
	for(int i=0; i<n; i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

void Insertion_Sort(int* A, int n)
{
	for(int i=1; i<=n-1; i++)
	{
		int key = A[i];
		int j = i-1;
		while(j>=0 && A[j]>key)
		{
			A[j+1] = A[j];
			j--;
		}
	A[j+1] = key;
	}
}

int main()
{
	int arr[]= {42,13,7,78,34};
	int n =5;
	printf("Before Sorting:\n");
	Print(arr,n);
	Insertion_Sort(arr,n);
	printf("After Sorting:\n");
	Print(arr,n);
	return 0;
}

