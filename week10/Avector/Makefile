CC = g++

avector: kvector.o avector.o
	$(CC) -o avector $^

avector.o: kvector.o avector.cpp 
	$(CC) -c $^

kvector.o: kvector.cpp
	$(CC) -c $^


clean:
	rm -f *.o