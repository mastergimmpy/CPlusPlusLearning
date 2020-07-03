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
	friend std::istream& operator>> (std::istream& so, CustomString& s);

	CustomString& operator= (const CustomString& s);
	CustomString& operator+= (const CustomString& s);
	

	friend CustomString operator+ (const CustomString& lhs, const CustomString& rhs);
	friend CustomString operator+ (const CustomString& lhs, char rhs);
	friend CustomString operator+ (const CustomString& lhs, const char* rhs);
	friend CustomString operator+ (char lhs, const CustomString& rhs);
	friend CustomString operator+ (const char* lhs, const CustomString& rhs);

	friend bool operator== (const CustomString& lhs, const CustomString& rhs);
	friend bool operator== (const CustomString& lhs, char rhs);
	friend bool operator== (const CustomString& lhs, const char* rhs);
	friend bool operator== (char lhs, const CustomString& rhs);
	friend bool operator== (const char* lhs, const CustomString& rhs);

	friend bool operator> (const CustomString& lhs, const CustomString& rhs);
	friend bool operator> (const CustomString& lhs, char rhs);
	friend bool operator> (const CustomString& lhs, const char* rhs);
	friend bool operator> (char lhs, const CustomString& rhs);
	friend bool operator> (const char* lhs, const CustomString& rhs);

	friend bool operator!= (const CustomString& lhs, const CustomString& rhs);
	friend bool operator!= (const CustomString& lhs, char rhs);
	friend bool operator!= (const CustomString& lhs, const char* rhs);
	friend bool operator!= (char lhs, const CustomString& rhs);
	friend bool operator!= (const char* lhs, const CustomString& rhs);

	friend bool operator< (const CustomString& lhs, const CustomString& rhs);
	friend bool operator< (const CustomString& lhs, char rhs);
	friend bool operator< (const CustomString& lhs, const char* rhs);
	friend bool operator< (char lhs, const CustomString& rhs);
	friend bool operator< (const char* lhs, const CustomString& rhs);

	friend bool operator<= (const CustomString& lhs, const CustomString& rhs);
	friend bool operator<= (const CustomString& lhs, char rhs);
	friend bool operator<= (const CustomString& lhs, const char* rhs);
	friend bool operator<= (char lhs, const CustomString& rhs);
	friend bool operator<= (const char* lhs, const CustomString& rhs);

	friend bool operator>= (const CustomString& lhs, const CustomString& rhs);
	friend bool operator>= (const CustomString& lhs, char rhs);
	friend bool operator>= (const CustomString& lhs, const char* rhs);
	friend bool operator>= (char lhs, const CustomString& rhs);
	friend bool operator>= (const char* lhs, const CustomString& rhs);


};

std::ostream& operator<<(std::ostream& os, const CustomString& m);