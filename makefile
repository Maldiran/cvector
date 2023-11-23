all: test

test: cvector.o test.o
	gcc -o test cvector.o test.o
cvector.o: cvector.c cvector.h
	gcc -c cvector.c
test.o: test.c cvector.h
	gcc -c test.c
