CC = g++

time: time.o main.o
	$(CC) -o time.out $^

time.o: time.cpp
	$(CC) -c $^

main.o: main.cpp
	$(CC) -c $^

# main.o: main.cpp
# 		$(CC) -c $^

clean:
	rm -f *.o