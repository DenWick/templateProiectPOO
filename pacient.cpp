#include "pacient.h"

// Constructorul clasei Pacient
Pacient::Pacient(std::string n, int v) : nume(n), varsta(v) {}

// Metoda pentru obținerea numelui pacientului
std::string Pacient::get_nume() {
    return nume;
}

// Metoda pentru afișarea informațiilor despre pacient
void Pacient::afisare() const {
    std::cout << "| Nume: " << nume << " | Varsta: " << varsta << std::endl;
}