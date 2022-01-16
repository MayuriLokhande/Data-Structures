#include <stdio.h>

void Print(int* arr, int n)
{
	for(int i=0; i<n ;i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

void Selection_Sort(int* A, int n)
{
	int indexMin,j,temp;
	for(int i=0; i<n-1; i++)
	{
		indexMin = i;
		for(j=i+1; j<n; j++)
		{
			if(A[j] < A[indexMin])
			{
				indexMin =j;
			}
		}
		temp = A[i];
		A[i] = A[indexMin];
		A[indexMin] = temp;
	}
}

int main()
{
	int arr[]= {13,6,34,98,23};
	int n = 5;
	printf("Before sorting:\n");
	Print(arr,n);
	Selection_Sort(arr,n);
	printf("After sorting:\n");
	Print(arr,n);
	return 0;
}

