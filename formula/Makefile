all: formula test clean

formula: nCr.h nCr.s formula.h formula.c
	gcc -ansi -pedantic -Wall -m32 -c nCr.h nCr.s
	gcc -ansi -pedantic -Wall -m32 -c formula.h formula.c
	gcc -ansi -pedantic -Wall -m32 -o formula formula.o nCr.o

clean:
	rm -f *.o
	rm -f formula
	rm -f *.h.gch

test:
	./formula 1
	./formula 2
	./formula 3
	./formula 4
	./formula 5
	./formula 6
	./formula 7
	./formula 8
	./formula 9
	./formula 10
	./formula 11
	./formula 12
	./formula 13
	./formula 14
	./formula 15
