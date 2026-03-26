#include "medic.h"
#include "exceptiiSpital.h"
#include <iostream>

// Constructorul clasei medic care initializeaza numele, functia, specializarea si id-ul medicului
medic::medic(std::string n, std::string f, std::string s, int sal) : 
personalSpital(n, f), specializare(s){
    if (sal < 0) {
        throw NegativeSalaryException();
    }
    salariu = sal;
}

void medic::afisare() const {
    personalSpital::afisare();
    std::cout << "| Specializare: " << specializare <<"| Salariu: " << salariu << std::endl;
}