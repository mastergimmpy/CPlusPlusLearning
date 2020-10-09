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
	Node *ptr = DoublyLinkedList::checkIfNodeExists(k);

	if(ptr == NULL) {
		std::cout << "No node exists with that key value: " << k << std::endl;
	}
	else {
		if(DoublyLinkedList::checkIfNodeExists(n->key) != NULL) {
			std::cout << "Node already exists with key value: " << n->key << ". Append another node with a different key value" << std::endl;
		}
		else {
			std::cout << "INSERTING..." << std::endl;

			Node *nextNodeAfter = ptr->nextNode;


			// appending at the end
			if(nextNodeAfter == NULL) {
				ptr->nextNode = n;
				n->previousNode = ptr;

				std::cout << "Node has been inserted at the END" << std::endl;
			}
			// inserting the node between two existing nodes
			else {
				n->nextNode = nextNodeAfter;
				nextNodeAfter->previousNode = n;
				n->previousNode = ptr;
				ptr->nextNode = n;

				std::cout << "Node has been inserted between nodes.";
			}
		}
	}
}


void DoublyLinkedList::delinkNodeByKey(int k) {
	Node *ptr = DoublyLinkedList::checkIfNodeExists(k);

	if(ptr == NULL) {
		std::cout << "No node exists with that key value: " << k << std::endl;
	}
	else {
		if(head == NULL) {
			std::cout << "Node can't be deleted. List is already empty" << std::endl;
		}
		else if(head != NULL) {
			if(head->key == k) {
				head = head->nextNode;
				std::cout << "Node with key value: " << k << " has been unlinked" << std::endl;
			}
			else{
				Node *nextNodeLink = ptr->nextNode;
				Node *previousNodeLink = ptr->previousNode;

				if(nextNodeLink == NULL) {
					previousNodeLink->nextNode = NULL;
					// Call Node deconstructor ?
					std::cout << "Node has been unlinked from the end" << std::endl;
				}
				else {
					previousNodeLink->nextNode = nextNodeLink;
					nextNodeLink->previousNode = previousNodeLink;
					// Call Node deconstructor ?
					std::cout << "Node unlinked from between two nodes" << std::endl;
				}
			}
		}
	}
}

void DoublyLinkedList::updateNodeByKey(int k, int d) {
	Node *ptr = DoublyLinkedList::checkIfNodeExists(k);

	if(ptr != NULL) {
		ptr->data = d;
		std::cout << "Node data has been updated" << std::endl;
	}
	else {
		std::cout << "That Node with key value: " << k << " does not exist" << std::endl;
	}
}

void DoublyLinkedList::printList() {
	if(head == NULL) {
		std::cout << "No Nodes in the Doubly Linked List to print" << std::endl;
	}
	else {
		std::cout << std::endl << "The Doubly Linked List values are: " << std::endl;
		Node *temp = head;

		while(temp != NULL) {
			std::cout << "(" << temp->key << "," << temp->data << ")" << std::endl;
			temp = temp->nextNode;
		}
	}
}