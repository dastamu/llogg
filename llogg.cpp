#include "llogg.h"
#include <iostream>
#include <chrono>
#include <string>
//#include <format> // Wymaga C++20

using std::cerr;
using std::cout;

std::string print_stamp() {
  // Pobranie aktualnego czasu z dokładnością do systemowej jednostki
  auto teraz = std::chrono::system_clock::now();
  // Zaokrąglenie (ucięcie) czasu do milisekund
  auto czas_ms = std::chrono::floor<std::chrono::milliseconds>(teraz);
  // Formatowanie i zwrot
  return std::format("{:%Y-%m-%d %H:%M:%S}", czas_ms);
}

void print_logg(const std::string &message) {
  // Pobranie aktualnego czasu z dokładnością do systemowej jednostki
  auto teraz = std::chrono::system_clock::now();
  // Zaokrąglenie (ucięcie) czasu do milisekund
  auto czas_ms = std::chrono::floor<std::chrono::milliseconds>(teraz);
  // Formatowanie (C++20 std::format)
  std::string s = std::format("{:%Y-%m-%d %H:%M:%S}", czas_ms);
  
  // Wypisanie
  cout << s << " [PRINT]: " << message << std::endl;
}

void llogg_trace(const std::string &message) {
  cerr << print_stamp() << " [TRACE]: " << message << std::endl;
}

void llogg_debug(const std::string &message) {
  cerr << print_stamp() << " [DEBUG]: " << message << std::endl;
}

void llogg_info(const std::string &message) {
  cerr << print_stamp() << " [INFO]: " << message << std::endl;
}

void llogg_warn(const std::string &message) {
  cerr << print_stamp() << " [WARN]: " << message << std::endl;
}

void llogg_error(const std::string &message) {
  cerr << print_stamp() << " [ERROR]: " << message << std::endl;
}

void llogg_fatal(const std::string &message) {
  cerr << print_stamp() << " [FATAL]: " << message << std::endl;
}
