#pragma once

#include <string>
#include "error.hh"
#include "board.hh"
#include "player.cpp"
#include "square.hh"
/* 
extern SquareDataTable gDataTable[BOARDLOCATION_MAX] = {
                             { "GO",
                               (static_cast<int>GO)
                             },
                             { .name = "MEDITERRANEAN_AVENUE",
                               .location = static_cast<int>MEDITERRANEAN_AVENUE,
                               .isProperty = true,
                               .isBuildable = true,
                               .cost = 60,
                               .mortagageValue = 30,
                               .rentSite = 2,
                               .rentHouse1 = 10,
                               .rentHouse2 = 30,
                               .rentHouse3 = 90,
                               .rentHouse4 = 160,
                               .rentHotel = 250,
                               .group = BROWN
                             },
                             { .name = "COMMUNITY_CHEST1",
                               .location = static_cast<int>COMMUNITY_CHEST1
                             },
                             { .name = "BALTIC_AVENUE",
                               .location = static_cast<int>BALTIC_AVENUE,
                               .isProperty = true,
                               .isBuildable = true
                               .cost = 60,
                               .mortagageValue = 30,
                               .rentSite = 4,
                               .rentHouse1 = 20,
                               .rentHouse2 = 60,
                               .rentHouse3 = 180,
                               .rentHouse4 = 320,
                               .rentHotel = 450,
                               .group = BROWN
                             },
                             { .name = "INCOME_TAX",
                               .location = static_cast<int>INCOME_TAX
                             },
                             { .name = "READING_RAILROAD",
                               .location = static_cast<int>READING_RAILROAD,
                               .isProperty = true,
                               .isBuildable = false,
                               .cost = 200,
                               .mortagageValue = 100
                             },
                             { .name = "ORIENTAL_AVENUE",
                               .location = static_cast<int>ORIENTAL_AVENUE,
                               .isProperty = true,
                               .isBuildable = true,
                               .cost = 100,
                               .mortagageValue = 50,
                               .rentSite = 6,
                               .rentHouse1 = 30,
                               .rentHouse2 = 90,
                               .rentHouse3 = 270,
                               .rentHouse4 = 400,
                               .rentHotel = 550,
                               .group = LIGHT_BLUE
                             },
                             { .name = "CHANCE1",
                               .location = static_cast<int> CHANCE1, 
                             },
                             { .name = "VERMONT_AVENUE",
                               .location = static_cast<int>VERMONT_AVENUE,
                               .isProperty = true,
                               .isBuildable = true,
                               .cost = 100,
                               .mortagageValue = 50,
                               .rentSite = 6,
                               .rentHouse1 = 30,
                               .rentHouse2 = 90,
                               .rentHouse3 = 270,
                               .rentHouse4 = 400,
                               .rentHotel = 550,
                               .group = LIGHT_BLUE
                             },
                             { .name = "CONNECTICUT_AVENUE",
                               .location = static_cast<int>CONNECTICUT_AVENUE,
                               .isProperty = true,
                               .isBuildable = true,
                               .cost = 120,
                               .mortagageValue = 60,
                               .rentSite = 8,
                               .rentHouse1 = 40,
                               .rentHouse2 = 100,
                               .rentHouse3 = 300,
                               .rentHouse4 = 450,
                               .rentHotel = 600,
                               .group = LIGHT_BLUE
                             },
                             { .name = "JAIL",
                               .location = static_cast<int>JAIL, 
                             },
                             { .name = "ST_CHARLS_PLACE",
                               .location = static_cast<int>ST_CHARLS_PLACE,
                               .isProperty = true,
                               .isBuildable = true,
                               .cost = 140,
                               .mortagageValue = 70,
                               .rentSite = 10,
                               .rentHouse1 = 50,
                               .rentHouse2 = 150,
                               .rentHouse3 = 450,
                               .rentHouse4 = 625,
                               .rentHotel = 750,
                               .group = PINK
                             },
                             { .name = "ELECTRIC_COMPANY",
                               .location = static_cast<int>ELECTRIC_COMPANY,
                               .isProperty = true,
                               .isBuildable = false,
                               .cost = 150,
                               .mortagageValue = 75 
                             },
                             { .name = "STATES_AVENUE",
                               .location = static_cast<int>STATES_AVENUE,
                               .isProperty = true,
                               .isBuildable = true,
                               .cost = 140,
                               .mortagageValue = 70,
                               .rentSite = 10,
                               .rentHouse1 = 50,
                               .rentHouse2 = 150,
                               .rentHouse3 = 450,
                               .rentHouse4 = 625,
                               .rentHotel = 750,
                               .group = PINK
                             },
                             { .name = "VIRGINIA_AVENUE",
                               .location = static_cast<int>VIRGINIA_AVENUE,
                               .isProperty = true,
                               .isBuildable = true,
                               .cost = 160,
                               .mortagageValue = 80,
                               .rentSite = 12,
                               .rentHouse1 = 60,
                               .rentHouse2 = 180,
                               .rentHouse3 = 500,
                               .rentHouse4 = 700,
                               .rentHotel = 900,
                               .group =PINK
                             },
                             { .name = "PENNSYLVANIA_RAILROAD",
                               .location = static_cast<int>PENNSYLVANIA_RAILROAD,
                               .isProperty = true,
                               .isBuildable = false,
                               .cost = 200,
                               .mortagageValue = 100 
                             },
                             { .name = "ST_JAMES_PLACE",
                               .location = static_cast<int>ST_JAMES_PLACE,
                               .isProperty = true,
                               .isBuildable = true
                               .cost = 180,
                               .mortagageValue = 90,
                               .rentSite = 14,
                               .rentHouse1 = 70,
                               .rentHouse2 = 200,
                               .rentHouse3 = 550,
                               .rentHouse4 = 750,
                               .rentHotel = 950,
                               .group = ORANGE
                             },
                             { .name = "COMMUNITY_CHEST2",
                               .location = static_cast<int>COMMUNITY_CHEST2, 
                             },
                             { .name = "TENNESSEE_AVENUE",
                               .location = static_cast<int>TENNESSEE_AVENUE,
                               .isProperty = true,
                               .isBuildable = true
                               .cost = 180,
                               .mortagageValue = 90,
                               .rentSite = 14,
                               .rentHouse1 = 70,
                               .rentHouse2 = 200,
                               .rentHouse3 = 550,
                               .rentHouse4 = 750,
                               .rentHotel = 950,
                               .group = ORANGE
                             },
                             { .name = "NEY_YORK_AVENUE",
                               .location = static_cast<int>NEY_YORK_AVENUE,
                               .isProperty = true,
                               .isBuildable = true
                               .cost = 200,
                               .mortagageValue = 100,
                               .rentSite = 16,
                               .rentHouse1 = 80,
                               .rentHouse2 = 220,
                               .rentHouse3 = 600,
                               .rentHouse4 = 800,
                               .rentHotel = 1000,
                               .group = ORANGE
                             },
                             { .name = "FREE_PARKING",
                               .location = static_cast<int>FREE_PARKING, 
                             },
                             { .name = "KENTUCKY_AVENUE",
                               .location = static_cast<int>KENTUCKY_AVENUE,
                               .isProperty = true,
                               .isBuildable = true,
                               .cost = 220,
                               .mortagageValue = 110,
                               .rentSite = 18,
                               .rentHouse1 = 90,
                               .rentHouse2 = 250,
                               .rentHouse3 = 700,
                               .rentHouse4 = 875,
                               .rentHotel = 1050,
                               .group = RED
                             },
                             { .name = "CHANCE2",
                               .location = static_cast<int>CHANCE2, 
                             },
                             { .name = "INDIANA_AVENUE",
                               .location = static_cast<int>INDIANA_AVENUE,
                               .isProperty = true,
                               .isBuildable = true
                               .cost = 220,
                               .mortagageValue = 110,
                               .rentSite = 18,
                               .rentHouse1 = 90,
                               .rentHouse2 = 250,
                               .rentHouse3 = 700,
                               .rentHouse4 = 875,
                               .rentHotel = 1050,
                               .group = RED
                             },
                             { .name = "ILLINOIS_AVENUE",
                               .location = static_cast<int>ILLINOIS_AVENUE,
                               .isProperty = true,
                               .isBuildable = true
                               .cost = 240,
                               .mortagageValue = 120,
                               .rentSite = 20,
                               .rentHouse1 = 100,
                               .rentHouse2 = 300,
                               .rentHouse3 = 750,
                               .rentHouse4 = 925,
                               .rentHotel = 1100,
                               .group = RED
                             },
                             { .name = "BO_RAILROAD",
                               .location = static_cast<int>BO_RAILROAD,
                               .isProperty = true,
                               .isBuildable = false,
                               .cost = 200,
                               .mortagageValue = 100
                             },
                             { .name = "ATLANTIC_AVENUE",
                               .location = static_cast<int>ATLANTIC_AVENUE,
                               .isProperty = true,
                               .isBuildable = true
                               .cost = 260,
                               .mortagageValue = 130, 
                               .rentSite = 22,
                               .rentHouse1 = 110,
                               .rentHouse2 = 330,
                               .rentHouse3 = 800,
                               .rentHouse4 = 975,
                               .rentHotel = 1150,
                               .group = YELLOW
                             },
                             { .name = "VENTNOR_AVENUE",
                               .location = static_cast<int>VENTNOR_AVENUE,
                               .isProperty = true,
                               .isBuildable = true
                               .cost = 260,
                               .mortagageValue = 130, 
                               .rentSite = 22,
                               .rentHouse1 = 110,
                               .rentHouse2 = 330,
                               .rentHouse3 = 800,
                               .rentHouse4 = 975,
                               .rentHotel = 1150,
                               .group = YELLOW
                             },
                             { .name = "WATER_WORKS",
                               .location = static_cast<int>WATER_WORKS,
                               .isProperty = true,
                               .isBuildable = false,
                               .cost = 150,
                               .mortagageValue = 75
                             },
                             { .name = "MARVIN_GARDENS",
                               .location = static_cast<int>MARVIN_GARDENS,
                               .isProperty = true,
                               .isBuildable = true
                               .cost = 280,
                               .mortagageValue = 140, 
                               .rentSite = 22,
                               .rentHouse1 = 120,
                               .rentHouse2 = 360,
                               .rentHouse3 = 850,
                               .rentHouse4 = 1025,
                               .rentHotel = 1200,
                               .group = YELLOW
                             },
                             { .name = "GO_TO_JAIL",
                               .location = static_cast<int>GO_TO_JAIL, 
                             },
                             { .name = "PACIFIC_AVENUE",
                               .location = static_cast<int>PACIFIC_AVENUE,
                               .isProperty = true,
                               .isBuildable = true
                               .cost = 300,
                               .mortagageValue = 150,
                               .rentSite = 26,
                               .rentHouse1 = 130,
                               .rentHouse2 = 390,
                               .rentHouse3 = 900,
                               .rentHouse4 = 1100,
                               .rentHotel = 1275,
                               .group = GREEN
                             },
                             { .name = "NORTH_CAROLINA_AVENUE",
                               .location = static_cast<int>NORTH_CAROLINA_AVENUE,
                               .isProperty = true,
                               .isBuildable = true
                               .cost = 300,
                               .mortagageValue = 150,
                               .rentSite = 26,
                               .rentHouse1 = 130,
                               .rentHouse2 = 390,
                               .rentHouse3 = 900,
                               .rentHouse4 = 1100,
                               .rentHotel = 1275,
                               .group = GREEN
                             },
                             { .name = "COMMUNITY_CHEST3",
                               .location = static_cast<int>COMMUNITY_CHEST3, 
                             },
                             { .name = "PEMMSYLVANIA_AVENUE",
                               .location = static_cast<int>PEMMSYLVANIA_AVENUE,
                               .isProperty = true,
                               .isBuildable = true
                               .cost = 320,
                               .mortagageValue = 160,
                               .rentSite = 28,
                               .rentHouse1 = 150,
                               .rentHouse2 = 450,
                               .rentHouse3 = 1000,
                               .rentHouse4 = 1200,
                               .rentHotel = 1400,
                               .group = GREEN
                             },
                             { .name = "SHORT_LINE",
                               .location = static_cast<int>SHORT_LINE,
                               .isProperty = true,
                               .isBuildable = false,
                               .cost = 200,
                               .mortagageValue = 100
                             },
                             { .name = "CHANCE3",
                               .location = static_cast<int>CHANCE3, 
                             },
                             { .name = "PARK_PLACE",
                               .location = static_cast<int>PARK_PLACE,
                               .isProperty = true,
                               .isBuildable = true
                               .cost = 350,
                               .mortagageValue = 175,
                               .rentSite = 35,
                               .rentHouse1 = 175,
                               .rentHouse2 = 500,
                               .rentHouse3 = 1100,
                               .rentHouse4 = 1300,
                               .rentHotel = 1500,
                               .group = BLUE
                             },
                             { .name = "LUXURY_TAX",
                               .location = static_cast<int>LUXURY_TAX, 
                             },
                             { .name = "BROADWALK",
                               .location = static_cast<int>BROADWALK,
                               .isProperty = true,
                               .isBuildable = true
                               .cost = 400,
                               .mortagageValue = 200,
                               .rentSite = 50,
                               .rentHouse1 = 200,
                               .rentHouse2 = 600,
                               .rentHouse3 = 1400,
                               .rentHouse4 = 1700,
                               .rentHotel = 2000,
                               .group = BLUE
                             }
};
 */

class Square
{
private:
    std::string name;
    int location;
public:
    Square(std::string sName, int loc) : name(sName), location(loc) {}
    virtual Error action(Player& player) = 0; // Pure virtual function (Interface)
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

