#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include "Node.h"

class DoublyLinkedList
{
public:
	Node* head;

	DoublyLinkedList();
	DoublyLinkedList(Node *n);
	~DoublyLinkedList();
	
};

#endif