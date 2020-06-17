// Const.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class Animal {
private:
    std::string name;

public:
    Animal() { std::cout << "Animal Created" << std::endl; };
    Animal(const Animal& other) { std::cout << "Animal created by copying" << std::endl; };
    void setName(std::string name) { this->name = name; };
    void speak() const { std::cout << "My name is: " << name << std::endl; }
};

int main()
{
    Animal animal1;

    animal1.setName("William Birkin");

    Animal animal2 = animal1;
    animal2.setName("Mr. X");

    animal1.speak();
    animal2.speak();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
