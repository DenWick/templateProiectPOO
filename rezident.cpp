#include "rezident.h"

// Constructorul clasei rezident care inițializează toate atributele moștenite și atributul specific clasei rezident
rezident::rezident(std::string n, std::string f, std::string s, int sal, std::string sp, std::string p, int an) 
: personalSpital(n, f), 
medic(n, f, s, sal), 
asistent(n, f, sp, p), 
anRezidentiat(an) {}

// Implementarea metodei de afișare pentru clasa rezident
void rezident::afisare() const {
    personalSpital::afisare();
    std::cout << "| Specializare: " << medic::specializare << " | Salariu: " << medic::salariu 
              << " | Ore de lucru: " << asistent::oreLucru << " | An rezidentiat: " << anRezidentiat << std::endl;
}