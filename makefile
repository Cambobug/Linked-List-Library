CC = gcc
CFLAGS = -std=gnu99 -Wpedantic -g -lm

all: test test.o LinkedListAPI.o

test: test.o LinkedListAPI.o
	$(CC) $(CFLAGS) test.o LinkedListAPI.o -o test

test.o: test.c LinkedListAPI.h
	$(CC) $(CFLAGS) -c test.c

LinkedListAPI.o: LinkedListAPI.c LinkedListAPI.h
	$(CC) $(CFLAGS) -c LinkedListAPI.c

clean:
	rm *.o test
