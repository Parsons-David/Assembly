all: formula

formula: nCr.h nCr.s formula.h formula.c
	gcc -ansi -pedantic -Wall -m32 -c nCr.h nCr.s
	gcc -ansi -pedantic -Wall -m32 -c formula.h formula.c
	gcc -ansi -pedantic -Wall -m32 -o formula formula.o nCr.o

clean:
	rm -f *.o
	rm -f formula
	rm -f *.h.gch
