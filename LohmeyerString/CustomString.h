#include <iostream>

class CustomString {
private:
	char* data;
	unsigned int length;

public:
	CustomString();
	CustomString(char c);
	CustomString(const char* c);
	CustomString(const CustomString& c);
	~CustomString();

	unsigned len() const;
	int index(char c) const;
	CustomString& operator=(const CustomString& c);



	void upCase(unsigned int first, unsigned int last);
	void downCase(unsigned int first, unsigned int last);
//	char toggleCase(char* c);
	int stringCompare(const char* c);


	friend std::ostream& operator<<(std::ostream& os, const CustomString& m);


};

std::ostream& operator<<(std::ostream& os, const CustomString& m);