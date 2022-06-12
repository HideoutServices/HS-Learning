#include <iostream>
#include <string>

void Player_info(std::string Player_1, std::string Player_2)
{

	std::cout << "What is Player one's name?\n";
	std::cin >> Player_1;
	std::cout << "What is Player two's name?\n";
	std::cin >> Player_2;
	std::cout << Player_1 << " will go first.\n";
	std::cout << Player_2 << " will go second.\n";

}


void Game_Board(std::string(*Space)[3][3])
{
	std::cout << "Welcome to my game of\n";
	std::cout << "    TIC-TAC-TOE!\n";
	std::cout << "                   \n";
	std::cout << "       |     |     \n";
	std::cout << "    " << (*Space)[0][0] << "  |  " << (*Space)[0][1] << "  |  " << (*Space)[0][2] << "\n";
	std::cout << "       |     |     \n";
	std::cout << "  _____|_____|_____\n";
	std::cout << "       |     |     \n";
	std::cout << "    " << (*Space)[1][0] << "  |  " << (*Space)[1][1] << "  |  " << (*Space)[1][2] << "\n";
	std::cout << "       |     |     \n";
	std::cout << "  _____|_____|_____\n";
	std::cout << "       |     |     \n";
	std::cout << "    " << (*Space)[2][0] << "  |  " << (*Space)[2][1] << "  |  " << (*Space)[2][2] << "\n";
	std::cout << "       |     |     \n";
}

void Match_data(char Token, std::string Player_1, std::string Player_2, int Digit, int ARow, int Column, std::string(*Space)[3][3]) {
	std::string input;
	if (Token == 'X')
	{
		std::cout << Player_1 << "Please Choose your spot!";
			std::cin >> input;
			Digit = std::stoi(input);
	}
	
	if (Token == 'O')
	{
		std::cout << Player_2 << "Please Choose your spot!";
			std::cin >> input;
			Digit = std::stoi(input);
	}
	
	if (Digit == 1)
	{
		ARow = 0;
		Column = 0;
	}
	
	if (Digit == 2)
	{
		ARow = 0;
		Column = 1;
	}
	
	if (Digit == 3)
	{
		ARow = 0;
		Column = 2;
	}
	
	if (Digit == 4)
	{
		ARow = 1;
		Column = 0;
	}
	
	if (Digit == 5)
	{
		ARow = 1;
		Column = 1;
	}
	
	if (Digit == 6)
	{
		ARow = 1;
		Column = 2;
	}
	
	if (Digit == 7)
	{
		ARow = 2;
		Column = 0;
	}
	
	if (Digit == 8)
	{
		ARow = 2;
		Column = 1;
	}
	
	if (Digit == 9)
	{
		ARow = 2;
		Column = 2;
	}
	
	else
	{
		std::cout << "Invalid! \n";
	}
	
	if (Token == 'X' && (*Space)[ARow][Column] != "X" && (*Space)[ARow][Column] != "O")
	{
		(*Space)[ARow][Column] = 'X';
		Token = 'O';
	}
	else if (Token == 'O' && (*Space)[ARow][Column] != "X" && (*Space)[ARow][Column] != "X")
	{
		(*Space)[ARow][Column] = 'O';
		Token = 'X';
	}
	else
	{
		std::cout << "This spot has already been taken!";
	}

}


