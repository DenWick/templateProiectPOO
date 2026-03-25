#include "interventie.h"

// Constructorul clasei interventie
interventie::interventie(std::string data, std::string ora, std::string nume_medic, std::string nume_pacient, std::string s) : 
consultatie(data, ora, nume_medic, nume_pacient), 
sectie(s) {}

// Getter pentru sectie
std::string interventie::get_sectie() {
    return sectie;
}