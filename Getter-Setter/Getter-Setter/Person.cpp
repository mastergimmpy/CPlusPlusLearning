#include "Person.h"

Person::Person() {
	name = "Leon Kennedy";
}

std::string Person::toString() {
	return "Person's name is: " + name;
}

void Person::setName(std::string newName) {
	name = newName;
}

std::string Person::getName() {
	return name;
}