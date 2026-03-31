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
        [[maybe_unused]] std::string get_data();
        [[maybe_unused]] std::string get_ora();
        [[maybe_unused]] std::string get_nume_medic();
        [[maybe_unused]] std::string get_nume_pacient();
};
        