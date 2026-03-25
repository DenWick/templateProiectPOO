#pragma once
#include "personalSpital.h"
#include <string>

class medic : virtual public personalSpital {
    protected:
        std::string specializare;
        int salariu;
    public:
        medic(std::string n, std::string f, std::string s, int sal);

        void afisare() const override;

        virtual ~medic() {}
};