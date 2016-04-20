#ifndef game_h
#define game_h

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <ncurses.h>

using namespace std;

class Dork {
private:
    string name;
    string level;
    
     int energy;
    int steps;
    
public:
    Dork();
    Dork(string in_name, string in_level, int in_energy, int in_steps);
    
    void display_init();
    void display_close();
    void clearDisplay(int num);
    
};

#endif
