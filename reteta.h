#pragma once
#include <string>
#include <iostream>
#include <vector>

class reteta {
    private:
        int idReteta;
        static int contorRetete;
        std::string denumire;
        std::vector<std::string> medicamente;
    public:
        reteta(std::string denumire);
        void adaugaMedicament(std::string medicament);
        void afiseaza() const;

        ~reteta() = default;
};