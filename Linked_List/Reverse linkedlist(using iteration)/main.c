#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node* next;
}Node_t;

Node_t* head;

void Insert(int x)
{
	Node_t* temp = (Node_t*)malloc(sizeof(Node_t));
	temp->data = x;
	temp->next = head;
	head = temp;
}
void Print()
{
	Node_t* temp = head;
	printf("List is :");
	while(temp!=NULL)
	{
		printf(" %d", temp->data);
		temp= temp->next;
	}
}
void Reverse()
{
	Node_t* prev = NULL;
	Node_t* current = head;
	Node_t* next1 =  NULL;
	while(current!=NULL)
	{
		next1 = current;
		current->next = prev;
		prev = current;
		current = next1;
	}
	head = prev;
}

int main()
{
	head = NULL;
	printf("Mayuri");
	Insert(2);
	Insert(1);
	Insert(3);
	Insert(6);
	Insert(7);
	Print();
	Reverse();
	Print();
	return 0;
}

