#include "Person.h"

Person::Person() {
	age = 0;
	name = "";
}

std::string Person::toString() {
	std::stringstream ss;

	ss << "Name: " << name << "; Age: " << age << ";/n";

	return ss.str();
}