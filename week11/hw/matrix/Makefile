CC = g++
CCFLAGS = -g

MyMatrix: MyMatrix.o TestMyMatrix.o
	$(CC) -o TestMyMatrix.out MyMatrix.o TestMyMatrix.o 

MyMatrix.o: MyMatrix.cpp MyMatrix.h
	$(CC) -c $^

TestMyMatrix.o: TestMyMatrix.cpp MyMatrix.h
	$(CC) -c $^


clean:
	rm -f *.o
