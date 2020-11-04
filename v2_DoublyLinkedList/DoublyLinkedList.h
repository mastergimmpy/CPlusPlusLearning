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
	void printList();

	// Updated Doubly Linked List methods
	Node* find(int d);
	void appendNode(Node *n);
	void prependNode(Node *n);
	void insertNodeBefore(Node *n);
	void insertNodeAfter(Node *n);
	void 
};

#endif