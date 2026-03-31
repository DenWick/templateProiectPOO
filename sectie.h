#pragma once 
#include <string>
#include <vector>
#include "medic.h"

class sectie {
    private:
        std::string nume;
        std::vector<medic*> medici;
    public:
        sectie(const std::string& n);
        void adaugaMedic(medic* m);
        void afisare() const;
        ~sectie();
};