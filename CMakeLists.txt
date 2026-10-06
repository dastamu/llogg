cmake_minimum_required(VERSION 3.12)
project(LoggerLibrary VERSION 1.0.0 LANGUAGES CXX)

# Wymaganie standardu C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Ustawienie domyślnego typu budowania na Release (optymalizacja)
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Wybierz typ budowania: Debug Release RelWithDebInfo MinSizeRel" FORCE)
endif()

# Włączenie podstawowych ostrzeżeń dla kompilatorów GCC/Clang
if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    add_compile_options(-Wall -Wextra)
endif()

# Definicja biblioteki statycznej
# CMake automatycznie utworzy plik 'libllogg.a' (Linux/macOS) lub 'llogg.lib' (Windows)
add_library(llogg STATIC 
    llogg.cpp 
    llogg.h
)

# Określenie, gdzie szukać nagłówków (ułatwia poprawne instalowanie)
target_include_directories(llogg PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

# --- REGUŁY INSTALACJI (install) ---

# Instalacja pliku binarnego biblioteki (libllogg.a)
install(TARGETS llogg
    ARCHIVE DESTINATION lib
)

# Instalacja pliku nagłówkowego (llogg.h)
install(FILES llogg.h
    DESTINATION include
)