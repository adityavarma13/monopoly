#include <iostream>
#include <string>
#include "error.hh"
#include "board.hh"
#include "player.hh"
#include "square.hh"
#include "display.hh"


Square::Square(std::string sName, int loc) : name(sName), location(loc) 
{
    // std::cout << "Square Constructor called" << std::endl;
}

Square::~Square() 
{
    // std::cout << "Square Destructor called" << std::endl;
}


CommunityChest::CommunityChest(std::string sName, int loc) : Square(sName, loc) 
{
    // TODO: create card stack
}
CommunityChest::~CommunityChest() {}
Error CommunityChest::action(Player& player)
{
    // TODO: charge 100 to the player landed
    return E_NONE;
}
Error CommunityChest::display()
{
    // TODO: Print the square.
    std::string displayOutput = "|--------------------------------------------------------|\n   "
                                + this->name
                                +"\n|--------------------------------------------------------|\n";
    printFormat(displayOutput,FOREGROUND_BLACK,BACKGROUND_BRIGHT_WHITE,BOLD);
    return E_NONE;
}


Chance::Chance(std::string sName, int loc) : Square(sName, loc) 
{
    // TODO: create card stack
}
Chance::~Chance() 
{
    // TODO: create card stack
}
Error Chance::action(Player& player)
{
    // TODO: charge 100 to the player landed
    return E_NONE;
}
Error Chance::display()
{
    // TODO: Print the square.
    std::string displayOutput = "|--------------------------------------------------------|\n   "
                                + this->name
                                +"\n|--------------------------------------------------------|\n";
    printFormat(displayOutput, FOREGROUND_BLACK, BACKGROUND_BRIGHT_WHITE, BOLD);
    return E_NONE;
}


LuxuryTax::LuxuryTax(std::string sName, int loc) : Square(sName, loc) {}
LuxuryTax::~LuxuryTax() {}
Error LuxuryTax::action(Player& player)
{
    // TODO: charge 100 to the player landed
    return E_NONE;
}
Error LuxuryTax::display()
{
    // TODO: Print the square.
    std::string displayOutput = "|--------------------------------------------------------|\n   "
                                + this->name
                                +"\n|--------------------------------------------------------|\n";
    printFormat(displayOutput, FOREGROUND_RED, BACKGROUND_BRIGHT_WHITE, BOLD);
    return E_NONE;
}


IncomeTax::IncomeTax(std::string sName, int loc) : Square(sName, loc) {}
IncomeTax::~IncomeTax() {}
Error IncomeTax::action(Player &player)
{
    // TODO: charge 200 to the player landed 
    return E_NONE;
}
Error IncomeTax::display()
{
    // TODO: Print the square.
    std::string displayOutput = "|--------------------------------------------------------|\n   "
                                + this->name
                                +"\n|--------------------------------------------------------|\n";
    printFormat(displayOutput, FOREGROUND_RED, BACKGROUND_BRIGHT_WHITE, BOLD);
    return E_NONE;
}


FreePark::FreePark(std::string sName, int loc) : Square(sName, loc) {}
FreePark::~FreePark() {}
Error FreePark::action(Player& player)
{
    // TODO: NOP
    return E_NONE;
}
Error FreePark::display()
{
    // TODO: Print the square.
    std::string displayOutput = "|--------------------------------------------------------|\n   "
                                + this->name
                                +"\n|--------------------------------------------------------|\n";
    printFormat(displayOutput, FOREGROUND_BLACK, BACKGROUND_BRIGHT_WHITE, BOLD);   
    return E_NONE;
}


Go::Go(std::string sName, int loc) : Square(sName, loc) {}
Go::~Go() {}
Error Go::action(Player& player)
{
    // TODO: Credit 200 Bucks
    return E_NONE;
}
Error Go::display()
{
    // TODO: Print the square.
    std::string displayOutput = "|--------------------------------------------------------|\n   "
                                + this->name
                                +"\n|--------------------------------------------------------|\n";
    printFormat(displayOutput, FOREGROUND_GREEN, BACKGROUND_BRIGHT_WHITE, BOLD);   
    return E_NONE;
}

GoToJail::GoToJail(std::string sName, int loc) : Square(sName, loc) {}
GoToJail::~GoToJail() {}
Error GoToJail::action(Player& player)
{
    // TODO: go to Jail
    return E_NONE;
}
Error GoToJail::display()
{
    // TODO: Print the square.
    std::string displayOutput = "|--------------------------------------------------------|\n   "
                                + this->name
                                +"\n|--------------------------------------------------------|\n";
    printFormat(displayOutput, FOREGROUND_RED, BACKGROUND_BRIGHT_WHITE, BOLD);
    return E_NONE;
}


Property::Property(std::string sName, int loc, bool isBuild, float cost, float mortagageValue, float rentSite, float rentHouse1,
        float rentHouse2, float rentHouse3, float rentHouse4, float rentHotel, PropertyGroup group)
    : Square(sName, loc), isPurchased(false), isMoragaged(false), isBuildable(isBuild), owner(nullptr), cost(cost),
        mortagageValue(mortagageValue), rentSite(rentSite), rentHouse1(rentHouse1), rentHouse2(rentHouse2), 
        rentHouse3(rentHouse3), rentHouse4(rentHouse4), rentHotel(rentHotel), group(group)
    {}
Property::~Property() {}
Error Property::action(Player& player)
{
    // TODO: no square specific action
    return E_NONE;
}
Error Property::display()
{
    // TODO: Print the square.
    std::string displayOutput = "|--------------------------------------------------------|\n   "
                                + this->name
                            +"   \n|--------------------------------------------------------|\n";
    switch (this->group)
    {
    case RAIL:
        printFormat(displayOutput, FOREGROUND_BLACK, BACKGROUND_WHITE, BOLD);
        break;
    case UTILITIES:
        printFormat(displayOutput, FOREGROUND_WHITE, BACKGROUND_BLACK, ITALIC);
        break;
    case BROWN:
        printFormat(displayOutput, FOREGROUND_WHITE, BACKGROUND_BLACK, BOLD);
        break;
    case LIGHT_BLUE:
        printFormat(displayOutput, FOREGROUND_BLACK, BACKGROUND_BLUE, BOLD);
        break;
    case PINK:
        printFormat(displayOutput, FOREGROUND_BLACK, BACKGROUND_MAGENTA, BOLD);
        break;
    case ORANGE:
        // I know its a mismatch but we dont have orange in ascii foreground
        printFormat(displayOutput, FOREGROUND_BLACK, BACKGROUND_CYAN, BOLD);
        break;
    case RED:
        printFormat(displayOutput, FOREGROUND_BLACK, BACKGROUND_RED, BOLD);
        break;
    case YELLOW:
        printFormat(displayOutput, FOREGROUND_BLACK, BACKGROUND_BRIGHT_YELLOW, BOLD);
        break;
    case GREEN:
        printFormat(displayOutput, FOREGROUND_BLACK, BACKGROUND_BRIGHT_GREEN, BOLD);
        break;
    case BLUE:
        printFormat(displayOutput, FOREGROUND_BLACK, BACKGROUND_BRIGHT_BLUE, BOLD);
        break;
    default:
        break;
    }
    return E_NONE;
}
