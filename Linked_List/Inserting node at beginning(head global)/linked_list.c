#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node* head;

void Insert(int x)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	//temp->next = NULL;
	//head = temp;
	//if(head != NULL) temp->next = head;
	//head = temp;
	temp->next = head;// optimized version of above commented lines
	head = temp; 
}

void Print()
{
	struct Node* temp = head;
	printf("List is :");
	while(temp != NULL)
	{
		printf(" %d",temp->data);
		temp = temp->next;
	}
	printf("\n");
}





int main()
{
	head = NULL; //empty list
	printf("How many numbers\n");
	int n, x;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		printf("Enter the number\n");
		scanf("%d", &x);
		Insert(x);
		Print();
	}
	return 0;
}

