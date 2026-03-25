#pragma once
#include <string>
#include <iostream>
#include "medic.h"
#include "asistent.h"

class rezident: virtual public medic, virtual public asistent {
    private:
        int anRezidentiat;
    public:
        rezident(std::string n, std::string f, std::string s, int sal, std::string sp, std::string p, int an);

        void afisare() const override;

        virtual ~rezident() {}
};

