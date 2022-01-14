#include<stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node* next;
}Node_t;

Node_t* Insert(Node_t* head, int x)
{
	struct Node* temp = (Node_t*)malloc(sizeof(Node_t));
	temp->data = x;
	temp->next = head;
	head = temp;
	return head;
}

void Print(Node_t* head)
{
	printf("list is:");
	while(head != NULL)
	{
		printf(" %d", head->data);
		head = head->next;
	}
	printf("\n");
}





int main()
{
	struct Node* head = NULL; //empty list
	printf("how many numbers\n");
	int x,n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		printf("Enter number\n");
		scanf("%d", &x);
		head = Insert(head, x);
		Print(head);
	}
	return 0;
}

