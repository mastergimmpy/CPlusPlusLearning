// NewOperator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Animal {
private:
    std::string name;

public:
    Animal() {
        std::cout << "Animal created." << std::endl;
    }

    Animal(const Animal& other) : name(other.name) {
        std::cout << "Animal created by copying." << std::endl;
    }

    ~Animal() {
        std::cout << "Deconstructor called" << std::endl;
    }

    void setName(std::string name) {
        this->name = name;
    }

    void speak() const {
        std::cout << "My name is: " << name << std::endl;
    }
};

Animal* createAnimal() {
    Animal *a = new Animal;
    a->setName("Fredo");
    return a;
}

int main()
{
    Animal *cat = new Animal();
    cat->setName("Freddy");
    cat->speak();
    delete cat;

    Animal* pAnimal = new Animal[10];

    delete [] pAnimal;

    return 0;
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
