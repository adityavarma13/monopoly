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
                info += plyr.getName();
                info += '\n';
            }
        }
        std::cout << "|--------------------------------------------------------|" << std::endl;
        board.squares[i]->display(info);
    }
    std::cout << "|--------------------------------------------------------|\n" << std::endl;
}