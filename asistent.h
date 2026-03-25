#pragma once
#include <string>
#include <iostream>
#include "personalSpital.h"

class asistent : virtual public personalSpital {
    protected:
        std::string specializare;
        std::string oreLucru;
    public:
        asistent(std::string n, std::string f, std::string s, std::string p);

        void afisare() const override;
};