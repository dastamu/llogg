# llogg
Simple logger library 

## Build library
### Manually
```sh
g++ -c llogg.cpp -o llogg.o && ar rcs libllogg.a llogg.o
```
### Makefile
```sh
make clean lib
```
## Use library
### Manually
```sh
g++ main.cpp libllogg.a -o test
```
### Makefile
```sh
make clean all
```