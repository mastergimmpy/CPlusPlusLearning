
output: DoublyLinkedList.o Node.o main.o
	g++ DoublyLinkedList.o Node.o main.o -o output

DoublyLinkedList.o: DoublyLinkedList.cpp DoublyLinkedList.h
	g++ -c DoublyLinkedList.cpp

Node.o: Node.cpp Node.h
	g++ -c Node.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o output