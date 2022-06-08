#include <iostream>

int main() {

    int i = 0;
    int square = 0;
    // The open side of a < always goes to the bigger value.
    // Write a while loop here:
    while (i < 10) {
        square = i * i;
        std::cout << i << " " << square << "\n";

        i++;
    }
}