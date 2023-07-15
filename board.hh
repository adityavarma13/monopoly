#pragma once
#include "board.hh"
#include "square.cpp"

class Board
{
private:
    // TODO: change this to an unique pointer
    Square* squares[BOARDLOCATION_MAX];
    // CommunityCard communityCardArr[16];
    // ChanceCard    chanceCardArr[16];
public:
    Board();
    ~Board();
};