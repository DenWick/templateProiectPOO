#include "medic.h"

// Constructorul clasei medic care initializeaza numele, functia, specializarea si id-ul medicului
medic::medic(std::string n, std::string f, std::string s, int sal) : personalSpital(n, f), specializare(s), salariu(sal) {}

void medic::afisare() const {
    personalSpital::afisare();
    std::cout << "| Specializare: " << specializare <<"| Salariu: " << salariu << std::endl;
}