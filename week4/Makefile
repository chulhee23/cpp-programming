CC = g++

# target:dependency list
all:dicetest

dicetest:dicetest.o random.o
	$(CC) -o dicetest.out $^ 

dicetest.o:dicetest.cpp
	$(CC) -c $^

guess:guess.o random.o
	$(CC) -o guess.out $^ 

guess.o: guess.cpp 
	$(CC) -c $^

random.o: random.cpp
	$(CC) -c $^


clean:
	rm -f *.o
