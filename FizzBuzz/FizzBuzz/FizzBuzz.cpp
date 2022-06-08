#include <iostream>

int main() {



	// for loop 1-100
	for (int z = 1; z <= 100; z++)
	{
		{

			if (z % 15 == 0) { std::cout << " FizzBuzz \n"; }
			else if (z % 5 == 0) { std::cout << " Buzz \n"; }
			else if (z % 3 == 0) { std::cout << " Fizz \n"; }
			else std::cout << z << "\n"; }
	}
}

