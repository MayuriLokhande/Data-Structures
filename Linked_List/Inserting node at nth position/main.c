#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node* next;
}Node_t;

Node_t* head;
void Insert(int data, int n)
{
	Node_t* temp1 = (Node_t*)malloc(sizeof(Node_t));// creation of new node to insert
	temp1->data = data;
	temp1->next == NULL;
	if(n ==1)
	{
		temp1->next = head;
		head = temp1;
		return;
	}
	Node_t* temp2 = head; //traversing till n-1
	for(int i=0; i<n-2;i++)
	{
		temp2= temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;
}

void Print()
{
	Node_t* temp = head;
	printf("List is:");
	while(temp!= NULL)
	{
		printf(" %d", temp->data);
		temp = temp->next;
	}
	printf("\n");

}

		


int main()
{
	head = NULL;// empty string
	Insert(2,1); //List 2
	Insert(3,2);//List 2 3
	Insert(4,1); //List 4 2 3 
	Insert(5,2);
	Print();
	return 0;
}

