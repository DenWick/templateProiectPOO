#include "meniuSpital.h"
#include <iostream>

int main() {
    try {
        meniuSpital aplicatie;
        aplicatie.ruleaza();
    } 
    catch (const std::exception& e) {
        std::cout << "EROARE CRITICA LA LANSARE: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}