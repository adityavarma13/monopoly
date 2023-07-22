#include <string>
#include "error.hh"
#include "player.hh"

Player::Player(std::string name, float seedAmt){}
float Player::getbankBalance(){}
std::string Player::getName(){}
Error Player::jumpToPosition(BoardLocation loc){}
Error Player::imprision(BoardLocation loc){}
Error Player::freeFromJail(BoardLocation loc){}
Error Player::credit(float amt){}
Error Player::debit(float amt){}