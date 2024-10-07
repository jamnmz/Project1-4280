#makefile for project1
#Jared Migneco
#Due: 10/07/24
CC =gcc
CFLAGS = -g

#all: main.c

main: main.c scanner.h
        gcc -o main main.c

clean: rm *.o $(objects)
