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

CustomString& CustomString::operator= (const CustomString& s) {
	if (this == &s) {
		return *this;
	}

	delete data;
	length = s.len();
	data = new char[length + 1];
	for (unsigned int j = 0; j < length; j++) {
		data[j] = s[j];
	}
	return *this;
}
/*
CustomString& CustomString::operator+= (const CustomString& s) {
	unsigned int len = length + s.len();
	char* str = new char[len+1];

	for(unsigned int j = 0; j < length; j++) {
		str[j] = data[j];
	}

	for (unsigned int i = 0; i < s.len(); i++) {
		str[length + i] = s[i];
	}



	delete data;
	length = len;
	data = str;
	return *this;
}
*/
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