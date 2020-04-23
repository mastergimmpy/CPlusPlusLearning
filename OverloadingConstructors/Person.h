#pragma once

#include <iostream>
#include <string>
#include <sstream>


class Person
{
private:
	std::string name;
	int age;

public:
	Person();
	Person(std::string, int);
	std::string toString();

};

