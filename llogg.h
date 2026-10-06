#ifndef LLOGG_H
#define LLOGG_H

#include <string>

// Funkcja drukująca napis na wyjście błędów (std::cerr)
void print_logg(const std::string& message);

void llogg_trace(const std::string& message);
void llogg_debug(const std::string& message);
void llogg_info(const std::string& message);
void llogg_warn(const std::string& message);
void llogg_error(const std::string& message);
void llogg_fatal(const std::string& message);

#endif // LLOGG_H

