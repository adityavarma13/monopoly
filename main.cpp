#include "board.hh"
#include "display.hh"
#include <iostream>
#include <stdexcept>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <unistd.h>
#include <map>
#define  BOARD_OVERFLOW  40

std::ostream& operator<<(std::ostream& out, const BoardLocation loc){
    static std::map<BoardLocation, std::string> strings;
    if (strings.size() == 0){
#define INSERT_ELEMENT(p) strings[p] = #p
        INSERT_ELEMENT(GO);
        INSERT_ELEMENT(COMMUNITY_CHEST1);
        INSERT_ELEMENT(BALTIC_AVENUE);
        INSERT_ELEMENT(INCOME_TAX);
        INSERT_ELEMENT(READING_RAILROAD);
        INSERT_ELEMENT(ORIENTAL_AVENUE);
        INSERT_ELEMENT(CHANCE1);
        INSERT_ELEMENT(VERMONT_AVENUE);
        INSERT_ELEMENT(CONNECTICUT_AVENUE);
        INSERT_ELEMENT(JAIL);
        INSERT_ELEMENT(ST_CHARLS_PLACE);
        INSERT_ELEMENT(ELECTRIC_COMPANY);
        INSERT_ELEMENT(STATES_AVENUE);
        INSERT_ELEMENT(VIRGINIA_AVENUE);
        INSERT_ELEMENT(PENNSYLVANIA_RAILROAD);
        INSERT_ELEMENT(ST_JAMES_PLACE);
        INSERT_ELEMENT(COMMUNITY_CHEST2);
        INSERT_ELEMENT(TENNESSEE_AVENUE);
        INSERT_ELEMENT(NEY_YORK_AVENUE);
        INSERT_ELEMENT(FREE_PARKING);
        INSERT_ELEMENT(KENTUCKY_AVENUE);
        INSERT_ELEMENT(CHANCE2);
        INSERT_ELEMENT(INDIANA_AVENUE);
        INSERT_ELEMENT(ILLINOIS_AVENUE);
        INSERT_ELEMENT(BO_RAILROAD);
        INSERT_ELEMENT(ATLANTIC_AVENUE);
        INSERT_ELEMENT(VENTNOR_AVENUE);
        INSERT_ELEMENT(WATER_WORKS);
        INSERT_ELEMENT(MARVIN_GARDENS);
        INSERT_ELEMENT(GO_TO_JAIL);
        INSERT_ELEMENT(PACIFIC_AVENUE);
        INSERT_ELEMENT(NORTH_CAROLINA_AVENUE);
        INSERT_ELEMENT(COMMUNITY_CHEST3);
        INSERT_ELEMENT(PENSYLVANIA_AVENUE);
        INSERT_ELEMENT(SHORT_LINE);
        INSERT_ELEMENT(CHANCE3);
        INSERT_ELEMENT(PARK_PLACE);
        INSERT_ELEMENT(LUXURY_TAX);
        INSERT_ELEMENT(BROADWALK);         
#undef INSERT_ELEMENT
    }   
    return out << strings[loc];
}

int main()
{
    // Initialize Board
    Board board;
    int numPlayer;
    std::cout << "Number of player playing the game (in range of 2-8)\n" << std::endl;
    std::cin >> numPlayer;
    srand(time(0));
    
    if ((numPlayer < 2) || (numPlayer > 8))
    {
        throw std::invalid_argument("Number of player out of range");
    }

    std::vector<Player> playerList;

    while( numPlayer-- )
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
        for (auto& plyr: playerList)
        {
            int dice1, dice2, jumpDistance, curLoc, destLoc;
            BoardLocation location;
            std::cout << "Rolling dice for player " << plyr.getName() << std::endl;
            rollDice(dice1, dice2);
        
            jumpDistance = dice1 + dice2;
            location = plyr.getPostion();
            curLoc   = static_cast<int>(location);
            destLoc  = curLoc + jumpDistance; 

            if ((destLoc) >= BOARD_OVERFLOW)
            {
                destLoc -= (BOARD_OVERFLOW + 1);
            }

            location = static_cast<BoardLocation>(destLoc);

            // TODO: find a way to clear terminal and replace below line.
            std::cout << "Moving player " << plyr.getName() << " to " << location << std::endl;
            plyr.jumpToPosition(location);
            
            do {
            std::cout << "Press enter to paint new board\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            } while (std::cin.get() != '\n');
            
            printBoard(board, playerList);
        }
    }
    
    
    // Print the board
    return 0;
}