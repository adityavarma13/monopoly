#include <iostream>
#include <sstream> // for ostringstream
#include <string>
#include "display.hh"
#include "board.hh"
#include <vector>


void printFormat(std::string str, Foreground fcolor,
                 Background bcolor, Style style)
{
    std::ostringstream out;
    out << "\033[" << style << ";" << fcolor << ";" << bcolor << "m";
    std::cout << out.str() << str;
}

void printBoard(Board& board, std::vector<Player> playerList)
{
    for (int i=0; i < BOARDLOCATION_MAX; i++)
    {
        std::string info = "";
        BoardLocation sqrLoacation = board.squares[i]->getLocation();
        for (Player plyr: playerList)
        {
            if (sqrLoacation == plyr.getPostion())
            {
                info += "                        \u2617 ";
                info += plyr.getName();
                info += "\n                       \u0024 ";
                info += std::to_string(plyr.getbankBalance());
                info += '\n';
            }
        }
        std::cout << "|--------------------------------------------------------|" << std::endl;
        board.squares[i]->display(info);
    }
    std::cout << "|--------------------------------------------------------|\n" << std::endl;
}

void rollDice(int& dice1, int& dice2)
{
    dice1 = (rand() % 5) + 1;
    dice2 = (rand() % 5) + 1;

    std::cout << dice1 << " and " << dice2 << " : "; 
    switch (dice1) //TODO: put this in a function.
    {
    case 1:
        std::cout << " \u2680 ";
        break;
    case 2:
        std::cout << " \u2681 ";
        break;
    case 3:
        std::cout << " \u2682 ";
        break;
    case 4:
        std::cout << " \u2683 ";
        break;
    case 5:
        std::cout << " \u2684 ";
        break;
    case 6:
        std::cout << " \u2685 ";
        break;
    }

    switch (dice2) //TODO: put this in a function.
    {
    case 1:
        std::cout << " \u2680 ";
        break;
    case 2:
        std::cout << " \u2681 ";
        break;
    case 3:
        std::cout << " \u2682 ";
        break;
    case 4:
        std::cout << " \u2683 ";
        break;
    case 5:
        std::cout << " \u2684 ";
        break;
    case 6:
        std::cout << " \u2685 ";
        break;
    }
    std::cout << std::endl;
}