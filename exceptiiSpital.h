#pragma once
#include <exception>
#include <string>

// Exceptie pentru un ID neinregistrat in sistem

class IDNotFoundException : public std::exception {
    public:
    const char* what() const noexcept override {
        return "Eroare: ID-ul introdus nu exista in baza de date a spitalului!";
    }
};

// Exceptie pentru un salariu negativ

class NegativeSalaryException : public std::exception {
    public:
    const char* what() const noexcept override {
        return "Eroare: Salariul introdus este negativ!";
    }
};
