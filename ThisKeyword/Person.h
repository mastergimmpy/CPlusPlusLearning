#pragma once
#include <iostream>
#include <string>
#include <sstream>

class Person
{
private:
	std::string name;
	int age;
	std::string occupation;

	void setName(std::string name);
	void setAge(int age);
	void setOccupation(std::string occupation);
	
public:
	Person();
	Person(std::string name, int age);
	Person(std::string name, int age, std::string occupation);
	
	void setInfo(std::string name, int age, std::string occupation);
	std::string getInfo();
	
	std::string toString();
};

