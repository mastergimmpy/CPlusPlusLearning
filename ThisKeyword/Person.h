#pragma once
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int age;
	
public:
	Person();
	
	std::string toString();
};

