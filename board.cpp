#include <iostream>
// #include <memory>
#include "board.hh"
#include "player.hh"
#include "square.hh"

Board::Board()
{
    std::cout << "Board Constructor called" << std::endl;
    this->squares[GO] = new FreePark_GO("GO", static_cast<int>(GO));
    this->squares[MEDITERRANEAN_AVENUE] = new Property("MEDITERRANEAN_AVENUE", 
                                                       static_cast<int>(MEDITERRANEAN_AVENUE),
                                                       true, 60, 30, 2, 10, 30, 90, 160, 250, BROWN);
    this->squares[COMMUNITY_CHEST1]     = new CommunityChest("COMMUNITY_CHEST1", 
                                                       static_cast<int>(COMMUNITY_CHEST1));
    this->squares[BALTIC_AVENUE]        = new Property("BALTIC_AVENUE", 
                                                       static_cast<int>(BALTIC_AVENUE),
                                                       true, 60, 30, 4, 20, 60, 180, 320, 450, BROWN);
    this->squares[INCOME_TAX]           = new IncomeTax("INCOME_TAX", static_cast<int>(INCOME_TAX));
    this->squares[READING_RAILROAD]     = new Property("READING_RAILROAD", 
                                                       static_cast<int>(READING_RAILROAD),
                                                       false, 200, 100, 0, 25, 50, 100, 200, 0, RAIL);
    this->squares[ORIENTAL_AVENUE]      = new Property("ORIENTAL_AVENUE", 
                                                       static_cast<int>(ORIENTAL_AVENUE),
                                                       true, 100, 50, 6, 30, 90, 270, 400, 550, LIGHT_BLUE);
    this->squares[CHANCE1]              = new Chance("CHANCE1", static_cast<int>(CHANCE1));
    this->squares[VERMONT_AVENUE]       = new Property("VERMONT_AVENUE", 
                                                       static_cast<int>(VERMONT_AVENUE),
                                                       true, 100, 50, 6, 30, 90, 270, 400, 550, LIGHT_BLUE);
    this->squares[CONNECTICUT_AVENUE]   = new Property("CONNECTICUT_AVENUE", 
                                                       static_cast<int>(CONNECTICUT_AVENUE),
                                                       true, 120, 60, 8, 40, 100, 300, 450, 600, LIGHT_BLUE);
    this->squares[JAIL]                 = new FreePark_GO("JAIL", static_cast<int>(JAIL));
    this->squares[ST_CHARLS_PLACE]      = new Property("ST_CHARLS_PLACE", 
                                                       static_cast<int>(ST_CHARLS_PLACE),
                                                       true, 140, 70, 10, 50, 150, 450, 625, 750, PINK);
    this->squares[ELECTRIC_COMPANY]     = new Property("ELECTRIC_COMPANY", 
                                                       static_cast<int>(ELECTRIC_COMPANY),
                                                       false, 150, 75, 0, 0, 0, 0, 0, 0, RAIL);
    this->squares[STATES_AVENUE]        = new Property("STATES_AVENUE", 
                                                       static_cast<int>(STATES_AVENUE),
                                                       true, 140, 70, 10, 50, 150, 450, 625, 750, PINK);
    this->squares[VIRGINIA_AVENUE]      = new Property("VIRGINIA_AVENUE", 
                                                       static_cast<int>(VIRGINIA_AVENUE),
                                                       true, 160, 80, 12, 60, 180, 500, 700, 900, PINK);
    this->squares[PENNSYLVANIA_RAILROAD] = new Property("PENNSYLVANIA_RAILROAD", 
                                                       static_cast<int>(PENNSYLVANIA_RAILROAD),
                                                       false, 200, 100, 0, 25, 50, 100, 200, 0, RAIL);
    this->squares[ST_JAMES_PLACE]       = new Property("ST_JAMES_PLACE", 
                                                       static_cast<int>(ST_JAMES_PLACE),
                                                       true, 180, 90, 14, 70, 200, 550, 750, 950, ORANGE);
    this->squares[COMMUNITY_CHEST2]     = new CommunityChest("COMMUNITY_CHEST2", 
                                                       static_cast<int>(COMMUNITY_CHEST2));
    this->squares[TENNESSEE_AVENUE]     = new Property("TENNESSEE_AVENUE", 
                                                       static_cast<int>(TENNESSEE_AVENUE),
                                                       true, 180, 90, 14, 70, 200, 550, 750, 950, ORANGE);
    this->squares[NEY_YORK_AVENUE]      = new Property("NEY_YORK_AVENUE", 
                                                       static_cast<int>(NEY_YORK_AVENUE),
                                                       true, 200, 100, 16, 80, 220, 600, 800, 1000, ORANGE);
    this->squares[FREE_PARKING]         = new FreePark_GO("FREE_PARKING", 
                                                       static_cast<int>(FREE_PARKING));
    this->squares[KENTUCKY_AVENUE]      = new Property("KENTUCKY_AVENUE", 
                                                       static_cast<int>(KENTUCKY_AVENUE),
                                                       true, 220, 110, 18, 90, 250, 700, 875, 1050, RED);
    this->squares[CHANCE2]              = new Chance("CHANCE2", static_cast<int>(CHANCE2));
    this->squares[INDIANA_AVENUE]       = new Property("KENTUCKY_AVENUE", 
                                                       static_cast<int>(KENTUCKY_AVENUE),
                                                       true, 220, 110, 18, 90, 250, 700, 875, 1050, RED);
    this->squares[ILLINOIS_AVENUE]      = new Property("ILLINOIS_AVENUE", 
                                                       static_cast<int>(ILLINOIS_AVENUE),
                                                       true, 240, 140, 20, 100, 300, 750, 925, 1100, RED);
    this->squares[BO_RAILROAD]          = new Property("BO_RAILROAD", 
                                                       static_cast<int>(BO_RAILROAD),
                                                       false, 200, 100, 0, 25, 50, 100, 200, 0, RAIL);
    this->squares[ATLANTIC_AVENUE]      = new Property("ATLANTIC_AVENUE", 
                                                       static_cast<int>(ATLANTIC_AVENUE),
                                                       true, 260, 130, 22, 110, 330, 800, 975, 1150, YELLOW);
    this->squares[VENTNOR_AVENUE]       = new Property("VENTNOR_AVENUE", 
                                                       static_cast<int>(VENTNOR_AVENUE),
                                                       true, 260, 130, 22, 110, 330, 800, 975, 1150, YELLOW);
    this->squares[WATER_WORKS]          = new Property("WATER_WORKS", 
                                                       static_cast<int>(WATER_WORKS),
                                                       false, 150, 75, 0, 0, 0, 0, 0, 0, UTILITIES);
    this->squares[MARVIN_GARDENS]       = new Property("MARVIN_GARDENS", 
                                                       static_cast<int>(MARVIN_GARDENS),
                                                       true, 280, 140, 22, 120, 360, 850, 1025, 1200, YELLOW);
    this->squares[GO_TO_JAIL]           = new GoToJail("GO_TO_JAIL", 
                                                       static_cast<int>(GO_TO_JAIL));
    this->squares[PACIFIC_AVENUE]       = new Property("PACIFIC_AVENUE", 
                                                       static_cast<int>(PACIFIC_AVENUE),
                                                       true, 300, 150, 26, 130, 390, 900, 1100, 1275, GREEN);
    this->squares[NORTH_CAROLINA_AVENUE] = new Property("NORTH_CAROLINA_AVENUE", 
                                                       static_cast<int>(NORTH_CAROLINA_AVENUE),
                                                       true, 300, 150, 26, 130, 390, 900, 1100, 1275, GREEN);
    this->squares[COMMUNITY_CHEST3]    = new CommunityChest("COMMUNITY_CHEST2", 
                                                       static_cast<int>(COMMUNITY_CHEST2));
    this->squares[PENSYLVANIA_AVENUE] = new Property("PENSYLVANIA_AVENUE", 
                                                       static_cast<int>(PENSYLVANIA_AVENUE),
                                                       true, 320, 160, 28, 150, 450, 1000, 1200, 1400, GREEN);
    this->squares[SHORT_LINE]          = new Property("SHORT_LINE", 
                                                       static_cast<int>(SHORT_LINE),
                                                       false, 200, 100, 0, 25, 50, 100, 200, 0, RAIL);
    this->squares[CHANCE3]             = new Chance("CHANCE3", static_cast<int>(CHANCE3));
    this->squares[PARK_PLACE]          = new Property("PARK_PLACE", 
                                                       static_cast<int>(PARK_PLACE),
                                                       true, 350, 175, 35, 175, 500, 1100, 1300, 1500, BLUE);
    this->squares[LUXURY_TAX]          = new LuxuryTax("LUXURY_TAX", static_cast<int>(LUXURY_TAX));
    this->squares[BROADWALK]           = new Property("BROADWALK", 
                                                       static_cast<int>(BROADWALK),
                                                       true, 400, 200, 50, 200, 600, 1400, 1700, 2000, BLUE);
}

Board::~Board()
{
    delete this->squares[GO];
    delete this->squares[MEDITERRANEAN_AVENUE];
    delete this->squares[COMMUNITY_CHEST1];
    delete this->squares[BALTIC_AVENUE];
    delete this->squares[INCOME_TAX];
    delete this->squares[READING_RAILROAD];
    delete this->squares[ORIENTAL_AVENUE];
    delete this->squares[CHANCE1];
    delete this->squares[VERMONT_AVENUE];
    delete this->squares[CONNECTICUT_AVENUE];
    delete this->squares[JAIL];
    delete this->squares[ST_CHARLS_PLACE];
    delete this->squares[ELECTRIC_COMPANY];
    delete this->squares[STATES_AVENUE];
    delete this->squares[VIRGINIA_AVENUE];
    delete this->squares[PENNSYLVANIA_RAILROAD];
    delete this->squares[ST_JAMES_PLACE];
    delete this->squares[COMMUNITY_CHEST2];
    delete this->squares[TENNESSEE_AVENUE];
    delete this->squares[NEY_YORK_AVENUE];
    delete this->squares[FREE_PARKING];
    delete this->squares[KENTUCKY_AVENUE];
    delete this->squares[CHANCE2];
    delete this->squares[INDIANA_AVENUE];
    delete this->squares[ILLINOIS_AVENUE];
    delete this->squares[BO_RAILROAD];
    delete this->squares[ATLANTIC_AVENUE];
    delete this->squares[VENTNOR_AVENUE];
    delete this->squares[WATER_WORKS];
    delete this->squares[MARVIN_GARDENS];
    delete this->squares[GO_TO_JAIL];
    delete this->squares[PACIFIC_AVENUE];
    delete this->squares[NORTH_CAROLINA_AVENUE];
    delete this->squares[COMMUNITY_CHEST3];
    delete this->squares[PENSYLVANIA_AVENUE];
    delete this->squares[SHORT_LINE];
    delete this->squares[CHANCE3];
    delete this->squares[PARK_PLACE];
    delete this->squares[LUXURY_TAX];
    delete this->squares[BROADWALK];
    std::cout << "Board Destructor called" << std::endl;
}