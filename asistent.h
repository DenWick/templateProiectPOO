#pragma once
#include <string>
#include <iostream>
#include "personalSpital.h"

class asistent : virtual public personalSpital {
    private:
        std::string specializare;
        std::string programLucru;
    public:
        asistent(std::string n, std::string f, std::string s, std::string p);

        void afisare() const override;
};