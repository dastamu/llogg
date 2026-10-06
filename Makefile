# Zmienne określające kompilator i flagi
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++20 -O3
AR = ar
ARFLAGS = rcs

# Nazwy plików wynikowych
LIB_NAME = libllogg.a
EXEC_NAME = test

# Domyślna reguła (wywoływana przez samo wpisanie 'make')
all: $(LIB_NAME) $(EXEC_NAME)

# Reguła umożliwiająca łatwe wymuszenie wersji debugowej (np. 'make debug')
debug: CXXFLAGS = -Wall -Wextra -std=c++20 -g -O0
debug: clean all

# Reguła tworząca bibliotekę statyczną z pliku obiektowego
$(LIB_NAME): llogg.o
	$(AR) $(ARFLAGS) $(LIB_NAME) llogg.o

# Reguła kompilująca llogg.cpp do pliku obiektowego llogg.o
logger.o: llogg.cpp llogg.h
	$(CXX) $(CXXFLAGS) -c llogg.cpp -o llogg.o

# Reguła kompilująca główny program i linkująca go z naszą biblioteką
$(EXEC_NAME): main.cpp $(LIB_NAME)
	$(CXX) $(CXXFLAGS) main.cpp $(LIB_NAME) -o $(EXEC_NAME)

# Reguła czyszcząca pliki budowania (usuwa pliki binarne i obiektowe)
clean:
	rm -f *.o *.a $(EXEC_NAME)

# Deklaracja reguł, które nie są fizycznymi plikami
.PHONY: all clean debug
