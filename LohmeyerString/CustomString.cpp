#include "CustomString.h"

CustomString::CustomString() {
	length = 0;
	data = NULL;
}

CustomString::CustomString(char c) {
	length = 1;

	data = new char[2];
	data[0] = c;
	data[1] = NULL;
}

CustomString::CustomString(const char* c) {
	if (c) {
		unsigned int n = 0;
		while (c[n] != '\0') {
			n++;
		}

		length = n;
		data = new char[n+1];

		for (unsigned int j = 0; j < n; j++) {
			data[j] = c[j];
		}
		data[length] = NULL;
	}
	else {
		length = 0;
		data = NULL;
	}
}

CustomString::CustomString(const CustomString& c) : length(c.length), data(new char[c.length + 1])
{
		memcpy(data, c.data, c.length);
		data[length] = NULL;

}

CustomString::~CustomString() {
	delete[] data;
}

unsigned int CustomString::len() const{


	return length;
}

int CustomString::index(char c) const {
	for (unsigned int i = 0; i < length; i++) {
		if (data[i] == c) {
			return i;
		}
	}
	return -1;
}

int CustomString::stringCompare(const char* c) {
	unsigned int n = 0;
	
	if (c) {
		while (c[n] != '\0') n++;
	}

	if (length == n) {
		for (unsigned int i = 0; i < length; i++) {
			if (data[i] > c[i]) {
				return -1;
			}
			if (data[i] < c[i]) {
				return 1;
			}
		}
		return 0;
	}
	
	return -1;
}


char& CustomString::operator[] (unsigned int j) {
	if(j >= length) {
		std::cout<<"Array index is out of bounds. Exiting...";
		exit(0);
	}
	return data[j];
}

const char& CustomString::operator[] (unsigned int j) const {
	if(j >= length) {
		std::cout<<"Array index is out of bounds. Exiting...";
		exit(0);
	}
	return data[j];
}

CustomString& CustomString::operator=(const CustomString& c) {
	if(this == &c) {
		return *this;
	}

	delete data;

	length = c.len();
	data = new char[length];
	for(unsigned int j = 0; j < length; j++){
		data[j] = c.data[j];
	}

	return *this;
}

CustomString& CustomString::operator+=(const CustomString& c){
	unsigned int len = length + c.len();
	char* str = new char[len];

	for(unsigned int i = 0; i < length; i++) {
		str[i] = data[i];
	}

	for(unsigned int j = 0; j < c.len(); j++) {
		str[length+j] = c[j];
	}

	delete data;
	length = len;
	data = str;

	return *this;
}

// BEGIN | operator+
CustomString& operator+(const CustomString& lhs, const CustomString& rhs) {
	return CustomString(lhs) += rhs;
}

CustomString& operator+(const CustomString& lhs, char rhs) {
	return CustomString(lhs) += CustomString(rhs);
}

CustomString& operator+(const CustomString& lhs, const char* rhs) {
	return CustomString(lhs) += CustomString(rhs);
}

CustomString& operator+(char lhs, const CustomString& rhs) {
	return CustomString(lhs) += rhs;
}

CustomString& operator+(const char* lhs, const CustomString& rhs) {
	return CustomString(lhs) += rhs;
}
// END | operator+


// BEGIN | operator==
bool operator==(const CustomString& lhs, const CustomString& rhs) {
	if(lhs.len() != rhs.len()) {
		return false;
	}

	unsigned int capacity = lhs.len();
	unsigned int n = 0;

	while((n < capacity) && (lhs[n] == rhs[n])) n++;
	return (n == capacity);
}

bool operator==(const CustomString& lhs, char rhs) {
	return (lhs == CustomString(rhs));
}

bool operator==(const CustomString& lhs, const char* rhs) {
	return (lhs == CustomString(rhs));
}

bool operator==(char lhs, const CustomString& rhs) {
	return (CustomString(lhs) == rhs);
}

bool operator==(const char* lhs, const CustomString& rhs) {
	return(CustomString(lhs) == rhs);
}
// END | operator==

// BEGIN | operator>
bool operator>(const CustomString& lhs, const CustomString& rhs) {
	unsigned int cap (lhs.len() < rhs.len()) ? lhs.len() : rhs.len();
	unsigned int n = 0;

	while((n < cap) && (lhs[n] == rhs[n])) n++;
	if(n == cap) {
		return (lhs.len() > rhs.len());
	}

	if( ('A' <= lhs[n] && lhs[n] <= 'Z') || ('a' <= lhs[n] && lhs[n] <= 'z') && 
		('A' <= rhs[n] && rhs[n] <= 'Z') || ('a' <= rhs[n] && rhs[n] <= 'z') ) {

		char A = (lhs[n] & ~32);
		char B = (rhs[n] & ~32);

		if(A != B) {
			return (A > B);
		}
	}

	return lhs[n] > rhs[n];
}

bool operator>(const CustomString& lhs, char rhs) {
	return (lhs > CustomString(rhs));
}

bool operator>(const CustomString& lhs, const char* rhs) {
	return (lhs > CustomString(rhs));
}

bool operator>(char lhs, const CustomString& rhs) {
	return (CustomString(lhs) > rhs);
}

bool operator>(const char* lhs, const CustomString& rhs) {
	return (CustomString(lhs) > rhs);
}
// END | operator>

// BEGIN | operator!=
bool operator!=(const CustomString& lhs, const CustomString& rhs){
	return !(lhs == rhs);
}

bool operator!=(const CustomString& lhs, char rhs) {
	return !(lhs == rhs);
}

bool operator!=(const CustomString& lhs, const char* rhs) {
	return !(lhs == rhs);
}

bool operator!=(char lhs, const CustomString& rhs) {
	return !(lhs == rhs);
}

bool operator!=(const char* lhs, const CustomString& rhs) {
	return !(lhs == rhs);
}
// END | operator!=


std::ostream& operator<<(std::ostream& os, const CustomString& m) {
	return os << m.data;
}

std::istream& operator>> (std::istream& is, CustomString& s)
{
	char* c = new char[1000];
	is >> c;
	s = CustomString(c);
	delete[] c;

	return is;
}