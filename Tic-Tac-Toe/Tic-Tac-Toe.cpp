#include <iostream>
#include "Header.h"


int main()
{ 
	std::string Space[3][3] = { {"1", "2", "3"}, {"4", "5", "6"}, {"7", "8", "9"} };
	std::string(*p2)[3][3] = &Space;
	int Digit = NULL;
	int Row = NULL;
	int Column = NULL;
	int Token = 'X';
	std::string Player_1;
	std::string Player_2;

	Game_Board(p2);
	Player_info(Player_1, Player_2);
	Match_data(Token, Player_1, Player_2, Digit, Row, Column, p2);
	
	std::cout << "Good Game!";
	}



