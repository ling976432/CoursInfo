CC = gcc
CCFLAGS = -Wall -g

all: main


lists.o:	lists.c lists.h
	${CC} ${CCFLAGS} -c lists.c
	
hash_table.o:	hash_table.c hash_table.h
	${CC} ${CCFLAGS} -c hash_table.c

main.o:	main.c
	${CC} ${CCFLAGS} -c main.c

main:	main.o lists.o hash_table.o
	${CC} ${CCFLAGS} -o main main.o lists.o hash_table.o

clean:
	rm *.o ; rm main
