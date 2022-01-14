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
	while(temp != NULL)
	{
		printf(" %d", temp->data);
		temp = temp->next;
	}
	printf("\n");

}	
  
void Delete(int n)
{
	Node_t* temp1 = head;
	if(n==1)
	{
		head = temp1->next;
		free(temp1);
		return;
	}
	for(int i=0; i<n-2;i++)
	{
		temp1=temp1->next;
	}
	Node_t* temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);
}

void Delete_value(int x)
{
	Node_t* temp1 = head;
	if(temp1->data == x)
	{
		head = temp1->next;
		free(temp1);
		return ;
	}
	Node_t* temp2;
	while(temp1->next!=NULL && temp1->next->data == x)
	{
		temp2 = temp1->next;
		temp1->next = temp1->next->next;
		free(temp2);
	}
}


int main()
{
	head = NULL;
	Insert(2);
	Insert(4);
	Insert(5);
	Insert(3);
	Print();
	Delete(3);
	Print();
	Delete_value(3);
	Print();
	return 0;
}



