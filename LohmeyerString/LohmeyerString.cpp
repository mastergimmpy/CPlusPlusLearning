// LohmeyerString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CustomString.h"

int main()
{
    std::cout << "Hello World!\n";

    CustomString test = "Foo Bar";
    test = "Bar Foo";
    CustomString test1("Foo Bar");

    std::string x = "foo";

    std::cout << "The length of the variable test is: " << test.len() << std::endl;
    std::cout << "The length of the variable test1 is: " << test1.len() << std::endl;
    std::cout << "x: " << x << std::endl;
    std::cout << "Test1: " << test1 << std::endl;
    
    //std::cout << "Test1 is: " << test1 << std::endl;
    std::cout << "The index of 'b' is: " << test.index('b') << std::endl;

    std::cout << "Are the strings equal? 'Foo Bar' vs 'Foo Bar' " << test.stringCompare("Foo Bar") << std::endl;
    std::cout << "Are the strings equal? 'Foo Bar' vs 'foo bar' " << test.stringCompare("foo bar") << std::endl;
    std::cout << "Are the strings equal? 'Foo Bar' vs 'Foo' " << test.stringCompare("Foo") << std::endl;
    //std::cout << "Toggle case of 'Foo Bar' " << test.toggleCase("Foo Bar") << std::endl;

}