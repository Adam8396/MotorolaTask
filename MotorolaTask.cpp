// MotorolaTask.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int maximizeSquare(int fenceLength) {
    int maxSquare = 0;
    int aLength = 0;

    for (int i = 0; i < fenceLength - 2; i++) {
        int a = i + 1;
        int b = fenceLength - (2 * a);
        int square = a * b;
        if (square > maxSquare) {
            maxSquare = square;
            aLength = a;
        }
        else {
            break;
        }
    }
    return aLength;
}

int main()
{
    std::string startCommand;
    int input;

    std::cout << "Wpisz RUN aby rozpoczac" << std::endl;
    std::cin >> startCommand;

    for (;;) {
        if (startCommand.compare("RUN") == 0) {
            std::cout << "Podaj dostepna dlugosc plotu" << std::endl;
            std::cin >> input;
            std::cout << "dlugosci bokow to: " << maximizeSquare(input) << " i " << (input - maximizeSquare(input)*2) << std::endl;
        }
        else {
            break;
        }
        std::cout << "Nieznana komenda" + input << std::endl;
        std::cout << "Program zakonczony" + input << std::endl;
    }



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
