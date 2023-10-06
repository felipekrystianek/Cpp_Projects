#include <iostream>
#include <chrono>
#include <thread> // for sleep

int main() {
    // Enter your birthdate (YYYY MM DD)
    int birthYear, birthMonth, birthDay;
    std::cout << "Enter your birthdate (YYYY MM DD): ";
    std::cin >> birthYear >> birthMonth >> birthDay;

    while (true) {
        // Create a named tm struct with your birthdate
        std::tm birthDate = {};
        birthDate.tm_year = birthYear - 1900;
        birthDate.tm_mon = birthMonth - 1;
        birthDate.tm_mday = birthDay;

        // Calculate the time elapsed since your birth in seconds with nanosecond precision
        auto birthTime = std::chrono::system_clock::from_time_t(std::mktime(&birthDate));
        auto currentTime = std::chrono::system_clock::now();
        auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(currentTime - birthTime).count();

        // Calculate your age in years with eight decimal places
        double ageInSeconds = static_cast<double>(elapsed) / 1e9; // Convert nanoseconds to seconds
        double ageInYears = ageInSeconds / 31556952.0; // Approximate seconds in a year

        // Output the result with eight decimal places
        std::cout.precision(12);
        std::cout << "Your age is approximately " << ageInYears << " years." << std::endl;

        // Sleep for a while (e.g., 1 second) before printing again
        std::this_thread::sleep_for(std::chrono::milliseconds (1));
    }

    return 0;
}
