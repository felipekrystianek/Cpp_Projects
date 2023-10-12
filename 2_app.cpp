//
// Created by Krystian Filipek on 12/10/2023.
//

#include <iostream>

int main() {
    int i = 0;
    int liczba;

    do {
        std::cin >> liczba;
        i++;
    } while (liczba >= 0 && i < 5);

    return 0;
}