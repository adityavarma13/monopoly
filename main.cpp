#include "board.hh"
#include <iostream>
#include <stdexcept>
#include <vector>
#include "display.hh"

int main()
{
    // Initialize Board
    Board board;
    int numPlayer;
    std::cout << "Number of player playing the game (in range of 2-8)\n" << std::endl;
    std::cin >> numPlayer;
    
    if ((numPlayer < 2) || (numPlayer > 8))
    {
        throw std::invalid_argument("Number of player out of range");
    }

    std::vector<Player> playerList;

    while(numPlayer--)
    {
        std::string nameinput;
        std::cout << "Enter player name : \n";
        std::cin >> nameinput;
        playerList.push_back(Player(nameinput, SEED_BALANCE));
    }
    
    while (true)
    {
        printBoard(board, playerList);

        // each player takes turn rolling dice.
        // for (auto plyr: playerList)
        // {
            
        // }

        std::string dice;
        std::cin >> dice;
    }
    
    
    // Print the board
    return 0;
}