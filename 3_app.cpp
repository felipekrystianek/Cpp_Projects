//
// Created by Krystian Filipek on 12/10/2023.
//

#include <iostream>
#include <cmath>

int main() {
    double aaa;
    double bbb;

    std::cout << "Podaj a: " << std::endl;
    std::cin >> aaa;

    std::cout << "Podaj b: " << std::endl;
    std::cin >> bbb;

    double przekatna;
    przekatna = sqrt(aaa * aaa + bbb * bbb);

    std::cout << "Przekątna: " << przekatna << std::endl;

    if (przekatna >= 10) {
        std::cout << "Przekątna większa lub równa 10: " << przekatna << std::endl;
    }

    if (std::abs(przekatna - sqrt(2) * aaa) < 0.0001) {
        std::cout << "Kwadrat" << std::endl;
    }

    if (std::abs(aaa - bbb) < 0.01) {
        std::cout << "Wartości a i b są praktycznie równe." << std::endl;
    }

    return 0;
}
