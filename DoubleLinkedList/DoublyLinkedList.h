#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include "Node.h"

class DoublyLinkedList
{
public:
	Node *head;

	DoublyLinkedList();
	DoublyLinkedList(Node *n);
	//~DoublyLinkedList();
	

	Node* checkIfNodeExists(int k);
	void appendNode(Node *n);
	void prependNode(Node *n);
	void insertNodeAfter(int k, Node *n);
	void deleteNodeByKey(int k);
};

#endif