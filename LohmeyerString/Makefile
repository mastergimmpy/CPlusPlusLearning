
output: LohmeyerString.o CustomString.o
	g++ LohmeyerString.o CustomString.o -o output

LohmeyerString.o: LohmeyerString.cpp
	g++ -c LohmeyerString.cpp

CustomString.o: CustomString.cpp CustomString.h
	g++ -c CustomString.cpp

clean:
	rm *.o output