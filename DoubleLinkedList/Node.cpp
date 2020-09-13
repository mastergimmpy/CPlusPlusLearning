#include "Node.h"

Node::Node() {
	key = 0;
	data = 0;
	next = NULL;
	previous = NULL;
}

Node::Node(int k, int d) {
	key = k;
	data = d;
}

// Node::~Node() {
// 	delete data;
// }
