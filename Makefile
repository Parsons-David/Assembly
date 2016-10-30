default: formula
all: default

formula: formula.o nCr.o
	gcc -ansi -pedantic -Wall -m32 -o formula formula.o nCr.o

formula.o: formula.c formula.h
	gcc -ansi -pedantic -Wall -m32 -c formula.c formula.h

nCr.o: nCr.s nCr.h
	gcc -ansi -pedantic -Wall -m32 -c nCr.s nCr.h

clean:
	-rm -f *.o
	-rm -f formula
	-rm -f *.h.gch
