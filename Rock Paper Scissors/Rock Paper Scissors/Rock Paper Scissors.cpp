#include <iostream>
#include <stdlib.h>

int main() {

	//----------------------------------------------------
	//---------------- Program Data ----------------------
	//----------------------------------------------------
	//	    scissors > paper
	//		paper > rock
	//		rock > lizard
	//		lizard > spok
	//		spok > scissors
	//		scissors > lizard
	//		lizard > paper
	//		paper > spok
	//		spok > rock
	//		rock > scissors
	//----------------------------------------------------
	//----------------------------------------------------
	int user;
	srand(time(NULL));
	int computer = rand() % 3 + 1;

	std::cout << "====================\n";
	std::cout << "rock paper scissors!\n";
	std::cout << "====================\n";

	std::cout << "1) Rock\n";
	std::cout << "2) Paper\n";
	std::cout << "3) Scissors\n";
	std::cout << "shoot! ";
	std::cin >> user;


	//----------------------------------------------------
	//------------ Processing User Data ------------------
	//----------------------------------------------------

	if (user == 1) std::cout << "Rock\n";
	else if (user == 2) std::cout << "Paper\n";
	else std::cout << "Scissors\n";


	//----------------------------------------------------
	//------------ Processing AI Data --------------------
	//----------------------------------------------------

	if (computer == 1)std::cout << "Rock\n";
	else if (computer == 2) std::cout << "Paper\n";
	else std::cout << "Scissors\n";
	if (user == computer) { std::cout << "The game is a tie!\n"; }

	//----------------------------------------------------
	//-------------- User Picks Rock ---------------------
	//----------------------------------------------------

	else if (user == 1) {
		if (computer == 2) { std::cout << "you won! woohoo!\n"; }
		if (computer == 3) { std::cout << "you lost! boo!\n"; }
	}
	//----------------------------------------------------
	//-------------- User Picks Paper --------------------
	//----------------------------------------------------

	else if (user == 2) {
		if (computer == 1) { std::cout << "you won! woohoo!\n"; }
		if (computer == 3) { std::cout << "you lost! boo!\n"; }
	}

	//----------------------------------------------------
	//------------- User Picks Scissors ------------------
	//----------------------------------------------------

	else if (user == 3) {
		if (computer == 1) { std::cout << "you lost! boo!\n"; }
		if (computer == 2) { std::cout << "you won! woohoo!\n"; }
	}
}