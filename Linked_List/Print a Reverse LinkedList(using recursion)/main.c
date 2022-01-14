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
	printf("List is:");
	while(temp!=NULL)
	{
		printf(" %d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void Recursive_Print(Node_t* p)
{
	if(p == NULL) return;
	printf(" %d", p->data);
	Recursive_Print(p->next);
}

void Reverse_Print(Node_t* p)
{
	if(p == NULL) return;
	Reverse_Print(p->next);
	printf(" %d",p->data);

}


int main()
{
	head = NULL;
	Insert(2);
	Insert(3);
	Insert(5);
	Insert(6);
	//Print();
	Recursive_Print(head);
	printf("\n");
	Reverse_Print(head);
	return 0;
}

