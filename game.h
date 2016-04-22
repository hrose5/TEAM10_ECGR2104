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
    int energy;
    int steps;
    
    string name;
    string map;
    
public:
    Dork();
    Dork(string in_name, string in_level, int in_energy, int in_steps);
    
    void clearDisplay(int num);
};

#endif
