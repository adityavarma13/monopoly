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