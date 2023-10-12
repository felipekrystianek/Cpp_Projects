//
// Created by Krystian Filipek on 12/10/2023.
//

#include <iostream>
#include <limits>

int main() {
    std::cout << "Rozmiary zmiennych:" << std::endl;
    std::cout << "Typ całkowitoliczbowy:" << std::endl;
    std::cout << "int: " << sizeof(int) << "B" << std::endl;
    std::cout << "long int: " << sizeof(long int) << "B" << std::endl;
    std::cout << "long long int: " << sizeof(long long int) << "B" << std::endl;
    std::cout << "unsigned int: " << sizeof(unsigned int) << "B" << std::endl;
    std::cout << "int jest liczbą całkowitą: " << std::numeric_limits<int>::is_integer << std::endl;
    std::cout << "Liczba cyfr w liczbie int: " << std::numeric_limits<int>::digits << std::endl;
    std::cout << "Liczba cyfr dziesiętnych, które można przechowywać w liczbie int bez straty: " << std::numeric_limits<int>::digits10 << std::endl;
    std::cout << "Czy int posiada wartość nieskończoną: " << std::numeric_limits<int>::has_infinity << std::endl;
    std::cout << "Maksimum dla int: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Dodatnie minimum dla int: " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "Minimum dla int: " << std::numeric_limits<int>::lowest() << std::endl;
    std::cout << "Czy reprezentacja int jest dokładna: " << std::numeric_limits<int>::is_exact << std::endl;

    return 0;
}
