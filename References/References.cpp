// References.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void stringOne(std::string &stringy) {
    stringy = "bip bap bam";
}

void differentString(std::string& stringy) {
    stringy = "Dear humanity, we regret coming to Earth. We regret being alien bastards. And we most defenitely regret that the Corp just blew up our ragety-ass fleet!";
}

void changeSomething(double &value) {
    value = 123.4;
}


int main()
{
    int value1 = 8;
    int& value2 = value1;
    value2 = 10;

    std::cout << "Value1: " << value1 << std::endl;
    std::cout << "Value2: " << value2 << std::endl;

    double value = 4.321;
    changeSomething(value);
    std::cout << value << std::endl;

    std::string sgtJohnson = "I don't care if it's God's own anti-son-of-a-bitch machine, or a giant hula hoop. We're not going to let them have it. What we will let them have is a belly full of lead, and a pool of their own blood to drown in!";
    std::cout << "Sgt. Johnson quotes: " << std::endl;
    std::cout << sgtJohnson << std::endl;
    differentString(sgtJohnson);
    std::cout << sgtJohnson << std::endl;
    stringOne(sgtJohnson);
    std::cout << sgtJohnson << std::endl;
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
