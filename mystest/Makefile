all: assem c

assem: mys test clean

c: myc test clean

myc: mystery.c
	gcc -o mystery mystery.c

mys: mystery.s
	gcc -m32 -o mystery mystery.s

test:
	number=0 ; while [[ $$number -le 46 ]] ; do \
        ./mystery $$number ; \
        ((number = number + 1)) ; \
    done
clean:
	rm -f *.o
	rm -f mystery
