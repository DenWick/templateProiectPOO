#pragma once
#include <string>
#include <iostream>

class personalSpital {
    private:
        static int idCounter;
        int id;
        std::string nume;
        std::string functie;
    public:
        personalSpital(std::string n, std::string f);

        int getId() const { return id; }

        virtual void afisare() const = 0;
};