#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node
{
private:

public:
	int key;
	int data;
	Node *nextNode;
	Node *previousNode;
	Node();
	Node(int k, int d);
	//~Node();
	
};

#endif