//
// Created by Krystian Filipek on 05/10/2023.
//

#include <iostream>

double maks = -1;
double liczba;

int main() {
    for (int i = 0; i < 4; i++)
    {
        std::cin >> liczba;

        if (liczba < 0) {
            break;
        }

        if (liczba > maks) {
            maks = liczba;
        }
    }

    std::cout << "Wartość maksymalna: " << maks << std::endl;

    return 0;
}