CC=gcc
CFLAGS=-Wall -g

all: ex

ex: ex.o
	$(CC) $(CFLAGS) -o ex ex.o
ex.o: ex.c 
	$(CC) $(CFLAGS) -c ex.c 

clean:
	rm -f ex ex.o