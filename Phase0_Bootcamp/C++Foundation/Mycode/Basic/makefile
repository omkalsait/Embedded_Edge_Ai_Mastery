


opload : integer.o opload.o
	g++ -fno-elide-constructors $^ -o $@ -std=c++17

integer.o : integer.cpp
	g++ -fno-elide-constructors -c $^ -o $@ -std=c++17

opload.o : opload.cpp
	g++ -fno-elide-constructors -c $^ -o $@ -std=c++17
