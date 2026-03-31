#pragma once
#include <string>
#include <iostream>

class consultatie  {
    private:
        std::string data;
        std::string ora;
        std::string nume_medic;
        std::string nume_pacient;
    public:
        consultatie(std::string data, std::string ora, std::string nume_medic, std::string nume_pacient);
        /*
        std::string get_data();
        std::string get_ora();]
        */
        std::string get_nume_medic();
        std::string get_nume_pacient();
};
        