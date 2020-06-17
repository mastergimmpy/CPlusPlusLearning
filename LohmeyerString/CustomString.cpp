#include "CustomString.h"

CustomString::CustomString() {
	length = 0;
	data = new char[0];
}

CustomString::CustomString(char c) {
	length = 1;

	data = new char(c);
}

CustomString::CustomString(const char* c) {
	if (c) {
		unsigned int n = 0;
		while (c[n] != '\0') {
			n++;
		}

		length = n;
		data = new char[n];

		for (unsigned int j = 0; j < n; j++) {
			data[j] = c[j];
		}
	}
	else {
		length = 0;
		data = new char[0];
	}
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