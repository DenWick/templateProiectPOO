#include "meniuSpital.h"
#include "medic.h"
#include "rezident.h"
#include "asistent.h"
#include <iostream>
#include <string>

// Constructor pentru meniuSpital
meniuSpital::meniuSpital() : spitalulMeu("Spitalul judetean") {} 

// Metoda pentru afișarea meniului
void meniuSpital::afisareMeniu() const {
    std::cout<<" ---------- SISTEM GESTIUNE SPITAL ---------- "<<std::endl;
    std::cout<<"1. Adauga personal spital"<<std::endl;
    std::cout<<"2. Adauga pacient"<<std::endl;
    std::cout<<"3. Afiseaza raport general"<<std::endl;
    std::cout<<"4. Modifica salariu medic"<<std::endl;
    std::cout<<"5. Sterge pacient"<<std::endl;
    std::cout<<"0. Iesire"<<std::endl;
    std::cout<<"--------------------------------------------- "<<std::endl;
    std::cout<<"Alege o optiune: ";
}

// Functia de rulare a meniului
void meniuSpital::ruleaza() {
    int optiune = -1;
    while (true) { 
        afisareMeniu();
        
        if (!(std::cin >> optiune)) {
            break; 
        }

        try {
            // Adaugare personal
            if (optiune == 1) {
                std::cout << "Ce doriti sa adaugati?\n";
                std::cout << "1. Medic\n2. Asistent\n3. Rezident\n";
                int tip; std::cin >> tip;

                std::string nume, prenume;
                std::cout << "Nume: "; std::cin >> nume;
                std::cout << "Prenume: "; std::cin >> prenume;

                if (tip == 1) {
                    std::string spec;
                    int sal;
                    std::cout << "Specializare: "; std::cin >> spec;
                    std::cout << "Salariu: "; std::cin >> sal;
                    // Upcasting automat: Medic* devine personalSpital*
                    spitalulMeu.adaugaPersonal(new medic(nume, prenume, spec, sal));
                } 
                else if (tip == 2) {
                    std::string sectie;
                    std::cout << "Sectie: "; std::cin >> sectie;
                    spitalulMeu.adaugaPersonal(new asistent(nume, prenume, sectie, "08:00-16:00"));
                } 
                else if (tip == 3) {
                    std::string spec, sectie;
                    int an;
                    std::cout << "Specializare: "; std::cin >> spec;
                    std::cout << "Sectie: "; std::cin >> sectie;
                    std::cout << "An rezidentiat: "; std::cin >> an;
                    // Rezident moștenește de la ambele, deci e și personalSpital
                    spitalulMeu.adaugaPersonal(new rezident(nume, prenume, spec, 5000, sectie, "08:00", an));
                }
                std::cout << "Adaugat cu succes!\n";
            }
            // Adaugare pacient
            else if(optiune == 2){
                std::string nume;
                int varsta;
                std::cout << "Nume pacient: "; std::cin >> nume;
                std::cout << "Varsta pacient: "; std::cin >> varsta;

                spitalulMeu.adaugaPacient(new pacient(nume, varsta));
                std::cout << "Pacient adaugat cu succes!\n";
            }
            // Afisare raport general
            else if(optiune == 3){
                spitalulMeu.afisare();
            }
            // Modificare salariu medic
            else if(optiune == 4){
                int idDeCautat, salariuNou;
                std::cout << "Introduceti ID-ul medicului: ";
                std::cin >> idDeCautat;
                std::cout << "Introduceti noul salariu: ";
                std::cin >> salariuNou;

                try {
                    spitalulMeu.modificaSalariuMedic(idDeCautat, salariuNou);
                } catch (const std::exception& e) {
                    std::cout << e.what() << std::endl;
                }
            }
            // Stergere pacient
            else if(optiune == 5){
                std::string numePacient;
                std::cout << "Nume pacient de sters: "; std::cin >> numePacient;
                spitalulMeu.stergePacient(numePacient);
                std::cout << "Pacient sters cu succes!\n";
            }

        }
        catch (const std::exception& e) {
            std::cerr << "Eroare: " << e.what() << std::endl;
        }
    }
}