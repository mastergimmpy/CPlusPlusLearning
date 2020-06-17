#include <iostream>

class CustomString {
	char* data;
	unsigned length;

public:
	CustomString();
	CustomString(char c);
	CustomString(const char* c);
	~CustomString();

	unsigned len() const;
	int index(char c) const;
	void upCase(unsigned int first, unsigned int last);
	void downCase(unsigned int first, unsigned int last);
	void toggleCase(unsigned int first, unsigned int last);
	int stringCompare(char* c, char* d);


};