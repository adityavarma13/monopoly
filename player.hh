#ifndef PLAYER_HH
#define PLAYER_HH

#include <string>
#include "error.hh"
#include "square.hh"

class Player
{
private:
    std::string playerName;
    float bankBalance;
    int position;
    bool isJailed;
public:
    // Player(std::string name, float seedAmt);
    // float getbankBalance();
    // std::string getName();
    // Error jumpToPosition(BoardLocation loc);
    // Error imprision(BoardLocation loc);
    // Error freeFromJail(BoardLocation loc);
    // Error credit(float amt);
    // Error debit(float amt);
};

#endif