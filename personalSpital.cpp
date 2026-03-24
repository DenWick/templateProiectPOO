#include <string>
#include "personalSpital.h"

int personalSpital::idCounter = 0;

// Constructorul clasei personalSpital care initializeaza numele, functia si id-ul personalului spitalului
personalSpital::personalSpital(std::string n, std::string f) : nume(n), functie(f) {
    id = ++idCounter;
}

void personalSpital::afisare() const {
    std::cout << "ID: " << id << "| Nume: " << nume << "| Functie: " << functie << std::endl;
}


