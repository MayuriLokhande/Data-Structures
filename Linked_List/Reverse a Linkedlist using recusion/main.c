#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node* next;
}Node_t;

Node_t* head;

void Insert(int x, int n)
{
	Node_t* temp1 = (Node_t*)malloc(sizeof(Node_t));
	temp1->data = x;
	if(n ==1)
	{
		temp1->next = head;
		head = temp1;
		return;
	}
	Node_t* temp2 = head;
	for(int i=0; i< n-2 ; i++)
	{
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;
}

void Reverse(Node_t* p)
{
	printf("aaa");
	if(p == NULL)
	{
		head = p;
		return;
	}
	Reverse(p->next);
	Node_t* q = p->next;
	q->next = p;
	p->next = NULL;
}

void Print()
{
	Node_t* temp = head;
	printf("List is :");
	while(temp!=NULL)
	{
		printf(" %d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main()
{
	head = NULL;
	Insert(2,1);
	Insert(4,2);
	Insert(3,3);
	Insert(8,4);
	Print();
	Reverse(head);
	Print();
	return 0;
}


