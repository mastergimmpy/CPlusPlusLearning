// ArraysFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void showOne(std::string texts[]) {
    std::cout << "showOne" << std::endl;
    
    for (int i = 0; i < 3; i++) {
        std::cout << texts[i] << std::endl;
    }

    std::cout << std::endl;
}

void showTwo(int nElements, std::string *texts) {
    std::cout << "showTwo" << std::endl;
    
    for (int i = 0; i < nElements; i++) {
        std::cout << texts[i] << std::endl;
    }

    std::cout << std::endl;
}

void showThree(std::string (&texts)[3]) {
    std::cout << "showThree" << std::endl;

    for (int i = 0; i < sizeof(texts)/sizeof(std::string); i++) {
        std::cout << texts[i] << std::endl;
    }

    std::cout << std::endl;
}

char *getMemory() {
    char* pMem = new char[100];

    return pMem;
}

void freeMemory(char* pMem) {
    delete[] pMem;
}


int main()
{
    std::string texts[] = {"apple", "orange", "banana"};

    showOne(texts);

    showTwo(3, texts);

    showThree(texts);

    char* pMemory = getMemory();

    freeMemory(pMemory); 


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
