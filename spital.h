#pragma once 
#include <vector>
#include <string>
#include "sectie.h"
#include "personalSpital.h"
#include "reteta.h"
#include "pacient.h"

class spital {
    private:
        std::string numeSpital;
        std::vector<personalSpital*> personal;
        std::vector<sectie*> sectii;
        std::vector<pacient*> pacienti;
        std::vector<reteta*> retete;
    public:
        spital(std::string n);

        // Metode de adaugare
        void adaugaPersonal(personalSpital* p);
        void adaugaPacient(pacient* p);
        void adaugaSectie(sectie* s);
        void adaugaReteta(reteta* r);

        // Stergere pacient
        void stergePacient(std::string numePacient);

        // Modificare salariu medic
        void modificaSalariuMedic(int idCautat, int salariuNou);

        // Afisare informatii spital
        void afisare() const;

        ~spital();
};