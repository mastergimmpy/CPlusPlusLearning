#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include "Node.h"

class DoublyLinkedList
{
public:
	Node *head;
	Node *tail;

	DoublyLinkedList();
	DoublyLinkedList(Node *n);
	//~DoublyLinkedList();
	

	Node* checkIfNodeExists(int k);
	void appendNode(Node *n);
	void prependNode(Node *n);
	void insertNodeAfter(int k, Node *n);
	void delinkNodeByKey(int k);
	void updateNodeByKey(int k, int d);
	

	// Updated Doubly Linked List methods
	Node* find(int d);
	void append(Node *n);
	void prepend(Node *n);
	void insertNodeBefore(Node *n);
	void insertNodeAfter(Node *n);
	void printList();
};

#endif