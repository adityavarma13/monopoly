#include <string>
#include "error.hh"
#include "player.hh"

Player::Player(std::string name, float seedAmt) :
        playerName(name), bankBalance(seedAmt), position(GO), isJailed(false), isBankrupt(false)
{}
float Player::getbankBalance()     { return this->bankBalance; }
std::string Player::getName()      { return this->playerName; }
BoardLocation Player::getPostion() { return this->position; }
Error Player::jumpToPosition(BoardLocation loc)
{
        this->position = loc;
        return E_NONE;
}
Error Player::imprision(BoardLocation loc) { return E_NONE; }
Error Player::freeFromJail(BoardLocation loc) { return E_NONE; }
Error Player::credit(float amt) { return E_NONE; }
Error Player::debit(float amt) { return E_NONE; }