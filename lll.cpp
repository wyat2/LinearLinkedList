#include "LLL.h"

void build(node*& head)
{
	int size = 10;
	node* temp = new node;
	temp->data = rand()%10;
	temp->next = NULL;
	head = temp;

	for(int i=0; i<size; ++i)
	{
		temp->next = new node;                 // new node
		temp->next->data = rand()%10;
	        temp->next->next = NULL;

		temp = temp->next;
	}
	
}

void display_all(node* head)
{
	if(!head)
		return;
	else
	{
	cout << " -> " << head->data;
	display_all(head->next);
	}
}

void destroy(node*& head)
{
	if(!head)
	return;

	destroy(head->next);
	delete head;
	head = NULL;
}
