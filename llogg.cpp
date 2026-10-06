#include "llogg.h"
#include <iostream>

void print_logg(const std::string& message) {
    // std::cerr służy do wypisywania komunikatów o błędach
    std::cerr << "BŁĄD: " << message << std::endl;
}
