#ifndef PLAYER_HH
#define PLAYER_HH

#include <string>
#include "error.hh"
#include "square.hh"
#define SEED_BALANCE 1500.00
class Player
{
private:
    std::string playerName;
    float bankBalance;
    BoardLocation position;
    bool isJailed;
    bool isBankrupt;
public:
    Player(std::string name, float seedAmt);
    float getbankBalance();
    void setName(std::string name);
    std::string getName();
    BoardLocation getPostion();
    Error jumpToPosition(BoardLocation loc);
    Error imprision(BoardLocation loc);
    Error freeFromJail(BoardLocation loc);
    Error credit(float amt);
    Error debit(float amt);
};

#endif