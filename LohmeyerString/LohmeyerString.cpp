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

    CustomString x = "foo";

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

    std::cout << "Creating a new string" << std::endl;
    CustomString customer;
    customer = "Bus";
    std::cout << "New string created" << std::endl;
    std::cout << "The new string is: " << customer << std::endl;

    std::cout << "Adding two string together" << std::endl;
    customer += test;
    std::cout << "The two strings added together are: ";
    std::cout << customer << std::endl;

    if(customer == "BusBar Foo") {
        std::cout << "operator== is working...maybe" << std::endl;
    }
    else {
        std::cout << "Perhaps it isn't working..." << std::endl;
    }

    customer = customer + test1;

    std::cout << "customer is now: " << customer << std::endl;

    if(x < test) {
        std::cout << "x is less than test. operator< seems to be working" << std::endl;
    }
    else {
        std::cout << "operator< seems to be malfunctioning..." << std::endl;
    }

    if(x > test) {
        std::cout << "x is more than test. operator> seems to be working" << std::endl;
    }
    else {
        std::cout << "operator> seems to be malfunctioning..." << std::endl;
    }


    std::cout << std::endl << std::endl;


    test.upCase(0, test.len());
    std::cout << "Test to upCase: " << test << std::endl;

    test.downCase(1, test.len());
    std::cout << "Test to downCase: " << test << std::endl;

}