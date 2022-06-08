//These are included libaries for your program.
//Libaries allow you to use Built-in functions in C++
//Code like std:cout & std::cin are functions!

#include <iostream>
#include <stdlib.h>

// Main code that is ran for the program.
int main()
{

    //Outputs to terminal "Magic 8 Ball" for user to read.
    std::cout << "Magic 8 Ball\n\n";

    // This code makes the " rand() " command a diffrent nuber ever time it is ran.
    //Without this code you will return the SAME random number every time. 
    //  srand(time(NULL))  s=Seed rand=random time=?? NULL= nothing / emepty space
    srand(time(NULL));

    // int anwser is defind as a random number here & 10 is the precentage of chance of getting the anwser right.
    int anwser = rand() % 10;

    // Here we are compairing the anwser "Random Number" to the "IF" statment below.      
    if (anwser == 0) {
        std::cout << "It is certain.\n";
    }
    // If the anwser "Random Number" is 1 then the console will run this cose below.
    // If the anwser "Random Number" is NOT 1  then the console will run the next "IF" statment. 
    else if (anwser == 1) {
        std::cout << "It is decidedly so.\n";
    }
    // If the anwser "Random Number" is 2 then the console will run this cose below.
    // If the anwser "Random Number" is NOT 2  then the console will run the next "IF" statment. 
    else if (anwser == 2) {
        std::cout << "Without a doubt.\n";
    }
    // If the anwser "Random Number" is 3 then the console will run this cose below.
    // If the anwser "Random Number" is NOT 3  then the console will run the next "IF" statment. 
    else if (anwser == 3) {
        std::cout << "Yes - definitely.\n";
    }
    // If the anwser "Random Number" is 4 then the console will run this cose below.
    // If the anwser "Random Number" is NOT 4  then the console will run the next "IF" statment. 
    else if (anwser == 4) {
        std::cout << "You may rely on it.\n";
    }
    // If the anwser "Random Number" is 5 then the console will run this cose below.
    // If the anwser "Random Number" is NOT 5  then the console will run the next "IF" statment. 
    else if (anwser == 5) {
        std::cout << "As I see it, yes.\n";
    }
    // If the anwser "Random Number" is 6 then the console will run this cose below.
    // If the anwser "Random Number" is NOT 6  then the console will run the next "IF" statment. 
    else if (anwser == 6) {
        std::cout << "Most likely.\n";
    }
    // If the anwser "Random Number" is 7 then the console will run this cose below.
    // If the anwser "Random Number" is NOT 7  then the console will run the next "IF" statment. 
    else if (anwser == 7) {
        std::cout << "Outlook good.\n";
    }
    // If the anwser "Random Number" is 8 then the console will run this cose below.
    // If the anwser "Random Number" is NOT 8  then the console will run the next "IF" statment. 
    else if (anwser == 8) {
        std::cout << "Yes.\n";
    }
    // If the anwser "Random Number" is 9 then the console will run this cose below.
    // If the anwser "Random Number" is NOT 9  then the console will run the next "IF" statment. 
    else {
        std::cout << "Signs point to yes.\n"; }

}