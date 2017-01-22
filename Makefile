#******************************************************************************
## Function name: Makefile
##
## DESCRIPTION:   A set of commands to compile all files in homework 8
##
## Parameters:    n/a
##
## Return values: n/a
##
##*****************************************************************************

# Declare the variables
CC = g++

CFLAGS = -c

# This target will compile all the files
all: hello

# This target will compile all the files
hello: main.o user_input.o conversion.o print_table.o round_up.o
	$(CC) -o HW8 main.o user_input.o conversion.o print_table.o round_up.o

# This target will compile main.o only
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

# This target will compile user_input.o only
user_input.o: user_input.cpp
	$(CC) $(CFLAGS) user_input.cpp

# This target will compile conversion.o only
conversion.o: conversion.cpp
	$(CC) $(CFLAGS) conversion.cpp

# This target will compile print_table.o only
print_table.o: print_table.cpp
	$(CC) $(CFLAGS) print_table.cpp

# This target will compile round_up.o only
round_up.o: round_up.cpp
	$(CC) $(CFLAGS) round_up.cpp

# This target will remove the executable and all object files
clean:
	rm -rf *o HW8
