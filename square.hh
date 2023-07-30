#ifndef SQUARE_HH
#define SQUARE_HH

#include "error.hh"
#include <string>

class Player; // forward declaration to avoid circular dependnecy.

enum BoardLocation{
    GO,
    MEDITERRANEAN_AVENUE,
    COMMUNITY_CHEST1,
    BALTIC_AVENUE,
    INCOME_TAX,
    READING_RAILROAD,
    ORIENTAL_AVENUE,
    CHANCE1,
    VERMONT_AVENUE,
    CONNECTICUT_AVENUE,
    JAIL,
    ST_CHARLS_PLACE,
    ELECTRIC_COMPANY,
    STATES_AVENUE,
    VIRGINIA_AVENUE,
    PENNSYLVANIA_RAILROAD,
    ST_JAMES_PLACE,
    COMMUNITY_CHEST2,
    TENNESSEE_AVENUE,
    NEY_YORK_AVENUE,
    FREE_PARKING,
    KENTUCKY_AVENUE,
    CHANCE2,
    INDIANA_AVENUE,
    ILLINOIS_AVENUE,
    BO_RAILROAD,
    ATLANTIC_AVENUE,
    VENTNOR_AVENUE,
    WATER_WORKS,
    MARVIN_GARDENS,
    GO_TO_JAIL,
    PACIFIC_AVENUE,
    NORTH_CAROLINA_AVENUE,
    COMMUNITY_CHEST3,
    PENSYLVANIA_AVENUE,
    SHORT_LINE,
    CHANCE3,
    PARK_PLACE,
    LUXURY_TAX,
    BROADWALK,
    BOARDLOCATION_MAX
};

enum PropertyGroup
{
    NOGROUP,
    RAIL,
    UTILITIES,
    BROWN,
    LIGHT_BLUE,
    PINK,
    ORANGE,
    RED,
    YELLOW,
    GREEN,
    BLUE
};

class Square
{
protected:
    std::string name;
    BoardLocation location;
public:
    Square(std::string sName, BoardLocation loc);
    ~Square();
    BoardLocation getLocation();
    virtual Error action(Player& player) = 0; // Pure virtual function (Interface)
    virtual Error display(std::string info) = 0;              // Interface
};

class CommunityChest: public Square
{
public:
    CommunityChest(std::string sName, BoardLocation loc);
    ~CommunityChest();
    Error action(Player& player) override;
    Error display(std::string info) override;
};

class Chance: public Square
{
public:
    Chance(std::string sName, BoardLocation loc);
    ~Chance();
    Error action(Player& player) override;
    Error display(std::string info) override;
};

class LuxuryTax: public Square
{
public:
    LuxuryTax(std::string sName, BoardLocation loc);
    ~LuxuryTax();
    Error action(Player& player) override;
    Error display(std::string info) override;
};

class IncomeTax: public Square
{
public:
    IncomeTax(std::string sName, BoardLocation loc);
    ~IncomeTax();
    Error action(Player& player) override;
    Error display(std::string info) override;
};

class FreePark: public Square
{
public:
    FreePark(std::string sName, BoardLocation loc);
    ~FreePark();
    Error action(Player& player) override;
    Error display(std::string info) override;
};

class Go: public Square
{
public:
    Go(std::string sName, BoardLocation loc);
    ~Go();
    Error action(Player& player) override;
    Error display(std::string info) override;
};

class GoToJail: public Square
{
public:
    GoToJail(std::string sName, BoardLocation loc);
    ~GoToJail();
    Error action(Player& player) override;
    Error display(std::string info) override;
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
    Property(std::string sName, BoardLocation loc, bool isBuild, float cost, float mortagageValue, float rentSite, float rentHouse1,
            float rentHouse2, float rentHouse3, float rentHouse4, float rentHotel, PropertyGroup group);
    ~Property();
    Error action(Player& player) override;
    Error display(std::string info) override;
};

#endif