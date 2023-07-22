#include "board.hh"

int main()
{
    // Initialize Board
    Board board;

    for (auto square: board.squares) 
    {
        square->display();
    }
    return 0;

}