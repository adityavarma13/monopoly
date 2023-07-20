#pragma once

#include <iostream>
#include <string>
#include "error.hh"
#include "board.hh"
#include "player.cpp"
#include "square.hh"

class Square
{
private:
    std::string name;
    int location;
public:
    Square(std::string sName, int loc) : name(sName), location(loc) 
    {
      std::cout << "Square Constructor called" << std::endl;
    }
    ~Square() 
    {
      std::cout << "Square Destructor called" << std::endl;
    }
    virtual Error action(Player& player) = 0; // Pure virtual function (Interface)
};

class CommunityChest: public Square
{
public:
    CommunityChest(std::string sName, int loc) : Square(sName, loc) 
    {
      // TODO: create card stack
    }
    Error action(Player& player) override
    {
        // TODO: charge 100 to the player landed
        return E_NONE;
    }
};

class Chance: public Square
{
public:
    Chance(std::string sName, int loc) : Square(sName, loc) 
    {
      // TODO: create card stack
    }
    Error action(Player& player) override
    {
        // TODO: charge 100 to the player landed
        return E_NONE;
    }
};

class LuxuryTax: public Square
{
public:
    LuxuryTax(std::string sName, int loc) : Square(sName, loc) {}
    Error action(Player& player) override
    {
        // TODO: charge 100 to the player landed
        return E_NONE;
    }
};

class IncomeTax:public Square
{
public:
    IncomeTax(std::string sName, int loc) : Square(sName, loc) {}
    Error action(Player& player) override
    {
        // TODO: charge 200 to the player landed 
        return E_NONE;
    }
};

class FreePark_GO:public Square
{
public:
    FreePark_GO(std::string sName, int loc) : Square(sName, loc) {}
    Error action(Player& player) override
    {
        // TODO: NOP
        return E_NONE;
    }
};

class GoToJail:public Square
{
public:
    GoToJail(std::string sName, int loc) : Square(sName, loc) {}
    Error action(Player& player) override
    {
        // TODO: go to Jail
        return E_NONE;
    }
};

class Property : public Square
{
private:
    bool    isPurchased; // check this before accessing owner pointer 
    bool    isMoragaged;
    bool    isBuildable;
    Player* owner;
    float   cost;
    float   mortagageValue;
    float   rentSite;
    float   rentHouse1;
    float   rentHouse2;
    float   rentHouse3;
    float   rentHouse4;
    float   rentHotel;
    PropertyGroup group;
public:
    Property(std::string sName, int loc, bool isBuild, float cost, float mortagageValue, float rentSite, float rentHouse1,
            float rentHouse2, float rentHouse3, float rentHouse4, float rentHotel, PropertyGroup group)
        : Square(sName, loc), isPurchased(false), isMoragaged(false), isBuildable(isBuild), owner(nullptr), cost(cost),
          mortagageValue(mortagageValue), rentSite(rentSite), rentHouse1(rentHouse1), rentHouse2(rentHouse2), 
          rentHouse3(rentHouse3), rentHouse4(rentHouse4), rentHotel(rentHotel)
    {}

    Error action(Player& player) override
    {
        // TODO: no square specific action
        return E_NONE;
    }
};
