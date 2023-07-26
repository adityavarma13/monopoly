#ifndef BOARD_HH
#define BOARD_HH

#include "board.hh"
#include "square.hh"

class Board
{
public:
    // TODO: change this to an unique pointer
    Square* squares[BOARDLOCATION_MAX];
    // CommunityCard communityCardArr[16];
    // ChanceCard    chanceCardArr[16];
public:
    Board();
    ~Board();
};

#endif