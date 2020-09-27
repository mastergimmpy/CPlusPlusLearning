#include "DoublyLinkedList.h"
#include "Node.h"

DoublyLinkedList::DoublyLinkedList(){
	head = NULL;
}

DoublyLinkedList::DoublyLinkedList(Node *n) {
	head = n;
}

// DoublyLinkedList::~DoublyLinkedList() {

// }


// 1. Check if node exists using key value
Node* DoublyLinkedList::checkIfNodeExists(int k) {
	Node *temp = NULL;
	Node *ptr = head;

	while(ptr != NULL){
		if(ptr->key == k) {
			temp = ptr;
		}

		ptr = ptr->nextNode;
	}

	return temp;
}

// 2. Append a node to the list

void DoublyLinkedList::appendNode(Node *n) {
	

	// Check if node exists
	if(DoublyLinkedList::checkIfNodeExists(n->key) != NULL) {
		std::cout << "That Node already exists with key value : " << n->key << ". Append another node with a different Key value" << std::endl;
	}
	else {
	// Append Node to end of list
		// 1st we need to check if the head is NULL and add this Node as the first Node
		if(head == NULL) {
			head = n;
			std::cout << "Node appended as head Node" << std::endl;
		}
		else {
			// 2nd if the Head is not NULL, then we need to find the end of the list and append the Node
			Node *ptr = head;
			while(ptr->nextNode != NULL) {
				ptr = ptr->nextNode;
			}
			ptr->nextNode = n;
			n->previousNode = ptr;
			std::cout << "Node appended" << std::endl;
		}
	}	
}

void DoublyLinkedList::prependNode(Node *n) {
	if(DoublyLinkedList::checkIfNodeExists(n->key) != NULL) {
		std::cout << "That Node already exists with Key value : " << n->key << ". Append another Node with a different Key value" << std::endl;
	}
	else {

		if(head == NULL) {
			head = n;
			std::cout << "Node has been prepended as head node" << std::endl;
		}
		else {
			head->previousNode = n;
			n->nextNode = head;

			head = n;
			std::cout << "Node has been prepended to the beginning" << std::endl;
		}
	}
}


void DoublyLinkedList::insertNodeAfter(int k, Node *n) {

}