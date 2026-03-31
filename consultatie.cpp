#include "consultatie.h"

// Constructorul clasei consultatie
consultatie::consultatie(const std::string& d, const std::string& o, const std::string& m, const std::string& p) : 
data(d), 
ora(o), 
nume_medic(m), 
nume_pacient(p) {}

// Getters pentru a accesa atributele private ale clasei consultatie
std::string consultatie::get_data() {
    return data;
}

std::string consultatie::get_ora() {
    return ora;
}

std::string consultatie::get_nume_medic() {
    return nume_medic;
}

std::string consultatie::get_nume_pacient() {
    return nume_pacient;
}