#include "Person.h"

Person::Person() {
	age = 0;
	name = "";
}

Person::Person(std::string name, int age) {
	this->name = name;
	this->age = age;
}

Person::Person(std::string name, int age, std::string occupation) {
	this->name = name;
	this->age = age;
	this->occupation = occupation;
}

void Person::setName(std::string name) {
	this->name = name;
}

void Person::setAge(int age) {
	this->age = age;
}

void Person::setOccupation(std::string occupation) {
	this->occupation = occupation;
}

void Person::setInfo(std::string name, int age, std::string occupation) {
	setName(name);
	setAge(age);
	setOccupation(occupation);
}

std::string Person::getInfo() {
	return Person::toString();
}

std::string Person::toString() {
	std::stringstream ss;

	ss << "Name: " << name << "; Age: " << age << "; Occupation: " << occupation << ";\n";

	return ss.str();
}

