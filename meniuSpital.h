#pragma once
#include "Spital.h"

class meniuSpital {
    private:
        spital spitalulMeu;
        void afisareMeniu() const;
    public:
        meniuSpital();
        void ruleaza();
        ~meniuSpital() = default;
};