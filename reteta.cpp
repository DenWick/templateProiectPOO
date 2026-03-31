#include "reteta.h"

// Inițializarea contorului static pentru ID-urile rețetelor
int reteta::contorRetete = 0;

// Implementarea constructorului pentru clasa reteta
reteta::reteta(const std::string& denumire) : denumire(denumire) {
    contorRetete++;
    idReteta = contorRetete;
}

// Implementarea metodei pentru adaugarea unui medicament în rețetă

void reteta::adaugaMedicament(const std::string& medicament) {
    medicamente.push_back(medicament);
}


// Implementarea constructorului de copiere
reteta::reteta(const reteta& alta) {
    this-> denumire = alta.denumire;
    this-> medicamente = alta.medicamente;

    contorRetete++;
    this-> idReteta = contorRetete;
}

// Implementarea operatorului de atribuire
reteta& reteta::operator=(const reteta& alta){
    if (this == &alta) {
        return *this;
    }
    this->denumire = alta.denumire;
    this->medicamente = alta.medicamente;
    this->idReteta = alta.idReteta;
    return *this;
}


// Implementarea metodei pentru afișarea informațiilor despre rețetă
void reteta::afiseaza() const {
    std::cout << "Reteta ID: " << idReteta << "\n";
    std::cout << "Denumire: " << denumire << "\n";
    std::cout << "Medicamente:\n";
    if (medicamente.empty()) {
        std::cout << "Nu sunt medicamente adaugate.\n";
    } 
    else {
        for (const auto& medicament : medicamente) {
            std::cout << "- " << medicament << ", ";
        }
    std::cout << "\n";
    }
}

// Implementarea destructorului pentru clasa reteta
reteta::~reteta() {}