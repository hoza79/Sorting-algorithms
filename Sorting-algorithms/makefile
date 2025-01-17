run: main.o Sorting.o
	clang++ -std=c++17 main.o Sorting.o -o run

main.o: main.cpp
	clang++ -std=c++17 -c main.cpp 

Sorting.o: Sorting.cpp Sorting.hpp
	clang++ -std=c++17 -c Sorting.cpp

clean: 
	rm *.o run
