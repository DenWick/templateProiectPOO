#pragma once
#include "spital.h"

class meniuSpital {
    private:
        spital spitalulMeu;
        void afisareMeniu() const;
    public:
        meniuSpital();
        void ruleaza();
        ~meniuSpital() = default;
};