project('LoggerProject', 'cpp',
  version : '1.0.0',
  default_options : [
    'cpp_std=c++20',          # Wymaganie standardu C++20
    'buildtype=release',      # Domyślna optymalizacja (odpowiednik Release / -O3)
    'warning_level=2'         # Włącza podstawowe ostrzeżenia (odpowiednik -Wall -Wextra)
  ]
)

# Definicja biblioteki statycznej libllogg.a
llogg_lib = static_library('llogg',
  'llogg.cpp',
  'llogg.h',
  install : true # Pozwala na późniejszą instalację biblioteki w systemie
)

# Tworzymy obiekt zależności, który łączy skompilowaną bibliotekę z jej nagłówkami
llogg_dep = declare_dependency(
  link_with : llogg_lib,
  include_directories : include_directories('.')
)
