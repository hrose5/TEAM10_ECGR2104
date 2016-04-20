#include "game.h"

Dork::Dork() {
    name = "default";
    level = "Terrestrial";
    energy = 10;
    steps = 0;
}

Dork::Dork(string in_name, string in_level, int in_energy, int in_steps) {
    name = in_name;
    level = in_level;
    energy = in_energy;
    steps = in_steps;
}

void Dork::display_init() {
    
}

void display_close() {
    
}

void clearDisplay(int num) {
    
}
