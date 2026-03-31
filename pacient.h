#pragma once
#include <string>
#include <iostream>

class pacient {
    private:
        std::string nume;
        int varsta;
    public:
        pacient(const std::string& n, int v);
        std::string get_nume();
        void afisare() const;
};