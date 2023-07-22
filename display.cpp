// This file will be deprecated later
#include <iostream>
#include <sstream> // for ostringstream
#include <string>
#include "display.hh"

using namespace std;

void printFormat(std::string str, Foreground fcolor,
                 Background bcolor, Style style)
{
    ostringstream out;
    out << "\033[" << style << ";" << fcolor << ";" << bcolor << "m";
    cout << out.str() << str;
}
/**
 * @brief Print location and its data.
 * 
 * @param loc
 */
// void printLocation(BoardLocation loc)
// {
//     /*
//     * TODO: Move to map.
//     *   std::map<BoardLocation, const char*> BoardMap;
//     *   map_init(BoardMap)
//     *   (GO, "Go")
//     *   (MEDITERRANEAN_AVENUE, "Mediterranean Avenue")
//     *   ...
//     */
//     switch (loc)
//     {
//     case GO:
//         printFormat("| GO                    |",BLACK,BACKGROUND_RED,BOLD);
//         break;
//     case MEDITERRANEAN_AVENUE:
//         printFormat("| MEDITERRANEAN_AVENUE  |",WHITE,BACKGROUND_BLACK,BOLD);
//         break;
//     case COMMUNITY_CHEST1:
//         printFormat("| COMMUNITY_CHEST1      |",BLACK,BACKGROUND_BRIGHT_WHITE,BOLD);
//         break;
//     case BALTIC_AVENUE:
//         printFormat("| BALTIC_AVENUE         |",WHITE,BACKGROUND_BLACK,BOLD);
//         break;
//     case INCOME_TAX:
//         printFormat("| INCOME_TAX            |",BLACK,BACKGROUND_WHITE,BOLD);
//         break;
//     case READING_RAILROAD:
//         printFormat("| READING_RAILROAD      |",BLACK,BACKGROUND_WHITE,BOLD);
//         break;
//     case ORIENTAL_AVENUE:
//         printFormat("| ORIENTAL_AVENUE       |",BLACK,BACKGROUND_CYAN,BOLD);
//         break;
//     case CHANCE1:
//         break;
//     case VERMONT_AVENUE:
//         break;
//     case CONNECTICUT_AVENUE:
//         break;
//     case JAIL:
//         break;
//     case ST_CHARLS_PLACE:
//         break;
//     case ELECTRIC_COMPANY:
//         break;
//     case STATES_AVENUE:
//         break;
//     case VIRGINIA_AVENUE:
//         break;
//     case PENNSYLVANIA_RAILROAD:
//         break;
//     case ST_JAMES_PLACE:
//         break;
//     case COMMUNITY_CHEST2:
//         break;
//     case TENNESSEE_AVENUE:
//         break;
//     case NEY_YORK_AVENUE:
//         break;
//     case FREE_PARKING:
//         break;
//     case KENTUCKY_AVENUE:
//         break;
//     case CHANCE2:
//         break;
//     case INDIANA_AVENUE:
//         break;
//     case ILLINOIS_AVENUE:
//         break;
//     case BO_RAILROAD:
//         break;
//     case ATLANTIC_AVENUE:
//         break;
//     case VENTNOR_AVENUE:
//         break;
//     case WATER_WORKS:
//         break;
//     case MARVIN_GARDENS:
//         break;
//     case GO_TO_JAIL:
//         break;
//     case PACIFIC_AVENUE:
//         break;
//     case NORTH_CAROLINA_AVENUE:
//         break;
//     case COMMUNITY_CHEST3:
//         break;
//     case PEMMSYLVANIA_AVENUE:
//         break;
//     case SHORT_LINE:
//         break;
//     case CHANCE3:
//         break;
//     case PARK_PLACE:
//         break;
//     case LUXURY_TAX:
//         break;
//     case BROADWALK:
//         break;
    
//     default:
//         break;
//     }

// }

// void printBoard()
// {
//     int i;
//     for (i = GO; i < BOARDLOCATION_MAX; i++)
//     {
//         BoardLocation lo = static_cast<BoardLocation>(i);
//         printLocation(lo);
//         // cout << F_RESET << "\n";
//         cout << F_RESET;
//     }
// }
