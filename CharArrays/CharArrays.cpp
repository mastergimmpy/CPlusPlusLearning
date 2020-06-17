// CharArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    char text[] = "bip bap bam!";
    unsigned len = 0;


    for (int i = 0; i < sizeof(text); i++) {
        std::cout << i << ": " << text[i] << std::endl;
    }

    
    unsigned n = 0;
    while (text[n] != '\0') n++;
    len = n;

    std::cout << "Length of char array is: " << len << std::endl;


    char* pStart = text;
    char* pEnd = text + len - 1;

    while (pStart < pEnd) {
        char temp = *pStart;

        *pStart = *pEnd;
        *pEnd = temp;
        

        pStart++;
        pEnd--;
    }

    std::cout << text << std::endl;

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
