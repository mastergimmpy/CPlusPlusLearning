#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node
{
private:

public:
	int data;
	Node *nextNode;
	Node *previousNode;
	Node();
	Node(int d);
	~Node();
	
};

#endif