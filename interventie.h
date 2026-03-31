#pragma once 
#include <string>
#include <iostream>
#include "consultatie.h"

class interventie : public consultatie {
    private:
        std::string sectie;
    public:
        interventie(std::string data, std::string ora, std::string nume_medic, std::string nume_pacient, std::string sectie);
        [[maybe_unused]] std::string get_sectie();
};
