#include<iostream>
#include<ctime>

int main(){

    int player;
    int computer1, computer2, computer3;
    int tries;

    std::cout << " ---------|*|-----------|NUMBY|----------|*|-----------\n";
    std::cout << "| !!!!!  THE NUMBER OF DOOM HAVE BEEN SELECTED  !!!!!  |\n";
    std::cout << " ------------------------------------------------------\n";
    
    std::cout << "   <--------------------------------------------->\n";
    std::cout << "   |                   TASK                      |\n";
    std::cout << "   <--------------------------------------------->\n";
    std::cout << "   | 1. Pick any 3 numbers from 1-10.            | \n";
    std::cout << "   | 2. Avoid the Number of Doom by any means.   |\n";
    std::cout << "   | 3. If you enter the Number of Doom, you lose|\n";
    std::cout << " ---------------------------------------------\n" << '\n';

    srand(time(NULL));
    std::cout << "<--------------------------------------------->\n";

    computer1 = rand() % 10 + 1;
    computer2 = rand() % 10 + 1;
    computer3 = rand() % 10 + 1;

    for (int i = 0; i < 5; i++){
        tries++;

        std::cout << "Enter guess " << i + 1 << " : " ;
        std::cin >> player;
        // std::cout << computer1 << '\n';

        if (player == computer1 || player == computer2 || player == computer3){
            std::cout << "   <---------------------------->\n";
            std::cout << "   |         YOU LOSE !!        |\n";
            std::cout << "    ----------------------------\n";
            std::cout << "   | You chose Number of Doom   |\n";
            std::cout << "    ----------------------------\n";
            break;
        }
        else{
            std::cout << "clear . . .\n";
        }

    }

    if (tries == 5){
    std::cout << "   <---#----------------------#--->\n";
    std::cout << "    |* * *  You Win !!  * * * *  |\n";
    std::cout << "   <---#----------------------#--->\n";
    }

    return 0;
}

