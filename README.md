# llogg
Simple logger library 

## Build library
```
g++ -c llogg.cpp -o llogg.o
ar rcs libllogg.a llogg.o
```
## Use library
```
g++ main.cpp libllogg.a -o test
```