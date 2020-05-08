CC=gcc
CFLAGS=-I.  -std=c99

all: parallel_sum

parallel_sum : parallel_sum.c  utils.o utils.h sum.o sum.h
	$(CC) -o parallel_sum utils.o  sum.o parallel_sum.c -lpthread $(CFLAGS)

sum.o: sum.h
	$(CC) -o sum.o -c sum.c $(CFLAGS)
    
utils.o : utils.h
	$(CC) -o utils.o -c utils.c $(CFLAGS)

clean :
	rm utils.o sum.o parallel_sum
