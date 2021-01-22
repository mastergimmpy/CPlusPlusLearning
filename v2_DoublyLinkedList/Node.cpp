#include "Node.h"

Node::Node() {
	data = 0;
	nextNode = NULL;
	previousNode = NULL;
}

Node::Node(int d) {
	data = d;
}

Node::~Node() {
	// delete data;
	// delete key;
	std::cout << "Destructor has been called" << std::endl;
}
