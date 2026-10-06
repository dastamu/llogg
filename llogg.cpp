#include "llogg.h"
#include <iostream>

using std::cerr;

void print_logg(const std::string &message) {
  // std::cerr służy do wypisywania komunikatów o błędach
  cerr << "BŁĄD: " << message << std::endl;
}
