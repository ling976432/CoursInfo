CC = gcc
CCFLAGS = -Wall -g

all: main


piles.o:	pile.c pile.h
	${CC} ${CCFLAGS} -c pile.c

main.o:	main.c
	${CC} ${CCFLAGS} -c main.c

main:	main.o piles.o
	${CC} ${CCFLAGS} -o main main.o piles.o

clean:
	rm *.o ; rm main
