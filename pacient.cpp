#include "pacient.h"

// Constructorul clasei Pacient
pacient::pacient(const std::string& n, int v) : nume(n), varsta(v) {}

// Metoda pentru obținerea numelui pacientului
std::string pacient::get_nume() const {
    return nume;
}

// Metoda pentru afișarea informațiilor despre pacient
void pacient::afisare() const {
    std::cout << "| Nume: " << nume << " | Varsta: " << varsta << std::endl;
}