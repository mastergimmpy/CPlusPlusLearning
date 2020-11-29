#include "DoublyLinkedList.h"
#include "Node.h"

DoublyLinkedList::DoublyLinkedList(){
	head = NULL;
	tail = NULL;
}

DoublyLinkedList::DoublyLinkedList(Node *n) {
	head = n;
	tail = n;
}

// DoublyLinkedList::~DoublyLinkedList() {

// }


// 1 Find Node
Node* DoublyLinkedList::find(int d){
	// Node *temp = NULL;
	Node *ptr = head;

	while(ptr != NULL) {
		if(ptr->data == d) {
			return ptr;
		}

		prt = ptr->nextNode;
	}

	std::cout << "Node with data of: " << d << " was not found." << std::endl;
}

// 2. Append node to the list
void DoublyLinkedList::append(Node *n){
	if(head == NULL) {
		head = n;
		tail = n;
		std::cout << "Node has been added as the head" <<std::endl;
	}
	else {
		Node *ptr = tail;
		ptr->nextNode = n;
		n->previousNode = ptr;
		tail = n;

		std::cout << "Node appended" << std::endl;
	}
}

// 3. Prepend a node to the beginning of the list
void DoublyLinkedList::prepend(Node *n) {
	if(head == NULL) {
		head = n;
		tail = n;
		std::cout << "Node has been added as the head" << std::endl;
	}
	else {
		Node *ptr = head;
		ptr->previousNode = n;
		n->nextNode = ptr;
		head = n;

		std::cout << "Node has been prepended to the head" << std::endl;
	}
}


// 4. Insert before Node
void DoublyLinkedList::insertNodeBefore(int d, Node *n){

}


// 5. Insert after Node
void DoublyLinkedList::insertNodeAfter(int d, Node *n){

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