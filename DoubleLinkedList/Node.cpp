#include "Node.h"

Node::Node() {
	key = 0;
	data = 0;
	nextNode = NULL;
	previousNode = NULL;
}

Node::Node(int k, int d) {
	key = k;
	data = d;
}

Node::~Node() {
	// delete data;
	// delete key;
	std::cout << "Destructor has been called" << std::endl;
}
