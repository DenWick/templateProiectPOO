#pragma once 
#include <string>
#include <vector>
#include "medic.h"

class sectie {
    private:
        std::string nume;
        std::vector<medic*> medici;
    public:
        sectie(std::string n);
        [[maybe_unused]] void adaugaMedic(medic* m);
        void afisare() const;
        ~sectie();
};