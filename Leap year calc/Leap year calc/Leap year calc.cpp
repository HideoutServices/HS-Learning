#include <iostream>

int main() {

    int year;

    //Asking the use for the year they were born.
    std::cout << "What year were you born?\n";
    std::cin >> year;

    // Check to see if the year is a four-digit number.
    if (year < 1000 || year > 9999) {

        std::cout << "Invalid entry.\n";
    }
    // Displays weather or not a years falls on leap year or not.
    else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {

        std::cout << year;
        std::cout << " falls on a leap year.\n";

    }

    // Telling user the year is NOT a leap year.
    else {

        std::cout << year;
        std::cout << " is not a leap year.\n";

    }
}