#include "llogg.h"
#include <iostream>

using std::cerr;

void print_logg(const std::string &message) {
  // std::cerr służy do wypisywania komunikatów o błędach
  cerr << "BŁĄD: " << message << std::endl;
}

void llogg_trace(const std::string &message) {
  cerr << "[TRACE]: " << message << std::endl;
}

void llogg_debug(const std::string &message) {
  cerr << "[DEBUG]: " << message << std::endl;
}

void llogg_info(const std::string &message) {
  cerr << "[INFO]: " << message << std::endl;
}

void llogg_warn(const std::string &message) {
  cerr << "[WARN]: " << message << std::endl;
}

void llogg_error(const std::string &message) {
  cerr << "[ERROR]: " << message << std::endl;
}

void llogg_fatal(const std::string &message) {
  cerr << "[FATAL]: " << message << std::endl;
}
