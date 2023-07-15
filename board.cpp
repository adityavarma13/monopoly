#include <iostream>
// #include <memory>
#include "board.hh"
#include "player.cpp"
#include "square.cpp"

Board::Board()
{
    std::cout << "Board Constructor called" << std::endl;
   this->squares[GO] = new FreePark_GO("GO", static_cast<int>(GO));
   this->squares[MEDITERRANEAN_AVENUE] = new Property("MEDITERRANEAN_AVENUE", 
                                                      static_cast<int>(MEDITERRANEAN_AVENUE),
                                                      true, 60, 30, 2, 10, 30, 90, 160, 250, BROWN);
/*    this->squares[COMMUNITY_CHEST1] = &
   this->squares[BALTIC_AVENUE] = &
   this->squares[INCOME_TAX] = &
   this->squares[READING_RAILROAD] = &
   this->squares[ORIENTAL_AVENUE] = &
   this->squares[CHANCE1] = &
   this->squares[VERMONT_AVENUE] = &
   this->squares[CONNECTICUT_AVENUE] = &
   this->squares[JAIL] = &
   this->squares[ST_CHARLS_PLACE] = &
   this->squares[ELECTRIC_COMPANY] = &
   this->squares[STATES_AVENUE] = &
   this->squares[VIRGINIA_AVENUE] = &
   this->squares[PENNSYLVANIA_RAILROAD] = &
   this->squares[ST_JAMES_PLACE] = &
   this->squares[COMMUNITY_CHEST2] = &
   this->squares[TENNESSEE_AVENUE] = &
   this->squares[NEY_YORK_AVENUE] = &
   this->squares[FREE_PARKING] = &
   this->squares[KENTUCKY_AVENUE] = &
   this->squares[CHANCE2] = &
   this->squares[INDIANA_AVENUE] = &
   this->squares[ILLINOIS_AVENUE] = &
   this->squares[BO_RAILROAD] = &
   this->squares[ATLANTIC_AVENUE] = &
   this->squares[VENTNOR_AVENUE] = &
   this->squares[WATER_WORKS] = &
   this->squares[MARVIN_GARDENS] = &
   this->squares[GO_TO_JAIL] = &
   this->squares[PACIFIC_AVENUE] = &
   this->squares[NORTH_CAROLINA_AVENUE] = &
   this->squares[COMMUNITY_CHEST3] = &
   this->squares[PEMMSYLVANIA_AVENUE] = &
   this->squares[SHORT_LINE] = &
   this->squares[CHANCE3] = &
   this->squares[PARK_PLACE] = &
   this->squares[LUXURY_TAX] = &
   this->squares[BROADWALK] = & */

}

Board::~Board()
{
    std::cout << "Board Destructor called" << std::endl;
    delete this->squares[GO];
    delete this->squares[MEDITERRANEAN_AVENUE];
}