all: 12main.o 12functions.o
	gcc -o program 12main.o 12functions.o

main.o: 12main.c 12headers.h
	gcc -c main.c

12functions.o: 12functions.c 12headers.h
	gcc -c 12functions.c
