CC = gcc
CCFLAGS = -Wall -g

all: main


files.o:	file.c file.h
	${CC} ${CCFLAGS} -c file.c

main.o:	main.c
	${CC} ${CCFLAGS} -c main.c

main:	main.o piles.o
	${CC} ${CCFLAGS} -o main main.o files.o

clean:
	rm *.o ; rm main
