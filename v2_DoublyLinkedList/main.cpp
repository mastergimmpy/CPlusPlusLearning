
#include "DoublyLinkedList.h"

int main(int argc, char** argv) {

	DoublyLinkedList link;
	int option;
	int key, existingKey, data;

	do {
		std::cout << "Select an operation to perform? Enter option number. Enter 0 to exit" << std::endl;
		std::cout << "1. Append Node" << std::endl;
		std::cout << "2. Prepend Node" << std::endl;
		std::cout << "3. Insert Node After" << std::endl;
		std::cout << "4. Delete Node By Key" << std::endl;
		std::cout << "5. Update Node By Key" << std::endl;
		std::cout << "6. Print List" << std::endl;
		std::cout << "0. Exit" << std::endl;

		std::cin >> option;

		Node *n1 = new Node();

		switch(option) {
			case 0:
				break;
			case 1:
				std::cout << "Append Node. Enter key & data of the Node to be appended" << std::endl;
				std::cin >> key;
				std::cin >> data;
				n1->key = key;
				n1->data = data;
				link.appendNode(n1);
				break;
			case 2:
				std::cout << "Prepend Node. Enter key & data of the Node to be prepended" << std::endl;
				std::cin >> key;
				std::cin >> data;
				n1->key = key;
				n1->data = data;
				link.prependNode(n1);
				break;
			case 3:
				std::cout << "Insert Node After. Enter key of existing Node you want to insert this Node after" << std::endl;
				std::cin >> existingKey;
				std::cin >> key;
				std::cin >> data;
				n1->key = key;
				n1->data = data;
				link.insertNodeAfter(existingKey, n1);
				break;
			case 4: 
				std::cout << "Delete Node By Key. Enter the Key of the Node you want to Delete" << std::endl;
				std::cin >> key;
				link.delinkNodeByKey(key);
				break;
			case 5: 
				std::cout << "Update Node by Key. Enter the Key of the Node you want to Update, falled by the updated Data" << std::endl;
				std::cin >> key;
				std::cin >> data;
				link.updateNodeByKey(key, data);
				break;
			case 6: 
				std::cout << "Print List" << std::endl;
				link.printList();
				break;
			default:
				std::cout << "Enter a valid entry" << std::endl;
				break;
		}


	} while(option != 0);
	
	return 0;
}