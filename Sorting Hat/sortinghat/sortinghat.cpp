#include <iostream>

int main(){

    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    int answer1;
    int answer2;
    int answer3;
    int answer4;

    int max = 0;
    std::string house;

//----------------------------------------------------------------
//------------------------- Question 1 ---------------------------
//----------------------------------------------------------------
// std::cout will output to terminal "The Sorting Hat Quiz!"
// for the user to read.

        std::cout << "           The Sorting Hat Quiz!\n\n\n";
        std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";
        std::cout << "1) The Good 2) The Great \n";
        std::cout << "3) The Wise 4) The Bold\n";

        std::cin >> answer1;
        std::cout << "\n\n\n";

        if (answer1 == 1) { hufflepuff++; }
        else if (answer1 == 2) { slytherin++; }
        else if (answer1 == 3) { ravenclaw++; }
        else if (answer1 == 4) { gryffindor++; }
        else { std::cout << "Invalid input.\n\n\n"; }

//----------------------------------------------------------------
//---------------------- Question 2 ------------------------------
//----------------------------------------------------------------
        std::cout << "Q2) Dawn or Dusk\n\n";
        std::cout << "1) Dawn\n";
        std::cout << "2) Dusk\n";

        std::cin >> answer2;
        std::cout << "\n\n\n";

        if (answer2 == 1) { gryffindor++ && ravenclaw++; }
        else if (answer2 == 2) { hufflepuff++ && slytherin++; }
        else { std::cout << "Invalid input.\n\n\n"; }

//----------------------------------------------------------------
//----------------------- Question 3 -----------------------------
//----------------------------------------------------------------
        std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n";

        std::cout << "1) The violin 2) The trumpet \n";
        std::cout << "3) The piano  4) The drum\n";

        std::cin >> answer3;
        std::cout << "\n\n\n";

        if (answer3 == 1) {slytherin++;}
        else if (answer3 == 2) {hufflepuff++;}
        else if (answer3 == 3) { ravenclaw++; }
        else if (answer3 == 4) { gryffindor++; }
        else { std::cout << "Invalid input.\n\n\n"; }

//----------------------------------------------------------------
//----------------------- Question 4 -----------------------------
//----------------------------------------------------------------

        std::cout << "Q4) Which road tempts you most?\n\n";

        std::cout << "1) The wide, sunny grassy lane\n";
        std::cout << "1) The narrow, dark, lantern-lit alley\n";
        std::cout << "1) The twisting, leaf-strewn path through woods\n";
        std::cout << "1) The cobbled street lined (ancient buildings)\n";

        std::cin >> answer4;
        std::cout << "\n\n\n";

        if (answer4 == 1) { hufflepuff++; }
        else if (answer4 == 2) { slytherin++; }
        else if (answer4 == 3) { gryffindor++; }
        else if (answer4 == 4) { ravenclaw++; }
        else { std::cout << "Invalid input.\n\n\n"; }

//----------------------------------------------------------------
//----------------------- Processing Data ------------------------
//----------------------------------------------------------------

        if (gryffindor > max) 
        {max = gryffindor;
        house = "Gryffindor";}

        if (hufflepuff > max) 
        {max = hufflepuff;
        house = "Hufflepuff";}

        if (ravenclaw > max) 
        {max = ravenclaw;
        house = "Ravenclaw";}

        if (slytherin > max) 
        {max = slytherin;
        house = "Slytherin"; }
        
        std::cout << "The Sorting Hat says you will be go with " << house << ".";
       


}