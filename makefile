main : lab3.o main.o
	g++ -o main main.o lab3.o
lab3.o : lab3.cpp lab3.h
	g++ -c lab3.cpp
main.o : main.cpp lab3.h
	g++ -c main.cpp
clean :
	rm *.o
