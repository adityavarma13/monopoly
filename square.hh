#pragma once

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

/* struct SquareDataTable
{
    char*  name;
    int     location;
    bool    isProperty;
    bool    isBuildable;
    float   cost;
    float   mortagageValue;
    float   rentSite;
    float   rentHouse1;
    float   rentHouse2;
    float   rentHouse3;
    float   rentHouse4;
    float   rentHotel;
    PropertyGroup group;
}

extern SquareDataTable gDataTable[BOARDLOCATION_MAX]; */