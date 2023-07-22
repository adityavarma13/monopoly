#ifndef DISPLAY_HH
#define DISPLAY_HH

/*
 https://en.wikipedia.org/wiki/ANSI_escape_code#Colors
 https://www.jdawiseman.com/papers/trivia/monopoly-rents.html
 https://www.monopolyland.com/monopoly-properties-list-with-prices/
*/
#define F_RESET "\033[0m\n"
enum Style {
  NONE          = 0 , //(everything back to normal)
  BOLD          = 1 , //(often a brighter shade of the same colour)
  FAINT         = 2 ,
  ITALIC        = 3 ,
  UNDERLINE     = 4 ,
  INVERSE       = 7 , //(swap foreground and background colours)
  BOLD_OFF      = 21,
  UNDERLINE_OFF = 24,
  INVERSE_OFF   = 27
};

enum Foreground {
  FOREGROUND_BLACK     = 30,
  FOREGROUND_RED       = 31,
  FOREGROUND_GREEN     = 32,
  FOREGROUND_YELLOW    = 33,
  FOREGROUND_BLUE      = 34,
  FOREGROUND_MAGENTA   = 35,
  FOREGROUND_CYAN      = 36,
  FOREGROUND_WHITE     = 37
};

enum Background {
  BACKGROUND_BLACK         = 40,
  BACKGROUND_RED           = 41,
  BACKGROUND_GREEN         = 42,
  BACKGROUND_YELLOW        = 43,
  BACKGROUND_BLUE          = 44,
  BACKGROUND_MAGENTA       = 45,
  BACKGROUND_CYAN          = 46,
  BACKGROUND_WHITE         = 47,
  BACKGROUND_BRIGHT_RED    = 101,
  BACKGROUND_BRIGHT_GREEN  = 102,
  BACKGROUND_BRIGHT_YELLOW = 103,
  BACKGROUND_BRIGHT_BLUE   = 104,
  BACKGROUND_BRIGHT_CYAN   = 106,
  BACKGROUND_BRIGHT_WHITE  = 107
};

void printFormat(std::string str, Foreground fcolor,
                 Background bcolor, Style style);

#endif