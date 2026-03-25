#include "asistent.h"

// Constructorul clasei asistent care initializeaza numele, functia, specializarea si id-ul asistentului
asistent::asistent(std::string n, std::string f, std::string s, std::string p) : personalSpital(n, f), specializare(s), oreLucru(p) {}

// Metoda de afisare a informatiilor despre asistent
void asistent::afisare() const {
    personalSpital::afisare();
    std::cout << "| Specializare: " << specializare << " |  Ore de lucru: " << oreLucru << std::endl;
}