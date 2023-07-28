#include "board.hh"
#include <iostream>
int main()
{
    // Initialize Board
    Board board;

    for (auto square: board.squares) 
    {
        // std::cout << "calling display" << std::endl;
        square->display();
    }
    return 0;

}