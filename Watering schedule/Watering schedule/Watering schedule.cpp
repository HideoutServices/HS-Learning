#include <iostream>
int x;
int y;

// Define needs_water() here:
std::string needs_water(int days, bool is_succulent) {
	if (days > 3 && is_succulent == false) {
		return "Time to water the plant.";
	}
	else if (days < 13 && is_succulent == true) {
		return "Don't water the plant!";
	}
	else if (days >= 13 && is_succulent == true) {
		return "Go ahead and give the plant a little water.";
	}
	else { "Don't water the plant!"; }
}
int main() {


	std::cout << "How long has it been since you last watered the plants?\n";
	std::cin >> x;
	std::cout << "Are the plants succulents?\n";
	std::cout << "Enter 0 for yes.\n";
	std::cout << "Enter 1 for no.\n";
	std::cin >> y;
	std::cout << needs_water(x, y) << "\n";
}