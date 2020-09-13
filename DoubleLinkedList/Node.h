#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node
{
private:
	int key;
	int data;
	Node* next;
	Node* previous;
public:
	Node();
	Node(int k, int d);
	//~Node();
	
};

#endif