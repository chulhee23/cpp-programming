CC = g++


all: myComplex.o testMyComplex.o
	$(CC) -o testComplex.out $^

myComplex.o: MyComplex.cpp MyComplex.h
	$(CC) -c $^

testMyComplex.o: TestMyComplex.cpp MyComplex.h
	$(CC) -c $^



clean:
	rm -f *.o