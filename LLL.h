// LLL.h
#include <iostream>
#include <cctype>
#include <cstdlib>

using namespace std;

struct node
{
	int data;
	node* next;
};

// Built in functions
void build(node*& head);
void display_all(node* head);
void destroy(node*& head);

/**********************************/

