GCC_ARGS = -std=c99 -pedantic-errors -Wall -Wstrict-prototypes -static
OBJ = checkInput.o  hostalive.o  pingHost.o


math: $(OBJ)
	gcc -o hostalive $(GCC_ARGS) $(OBJ)

%.o: %.c
	gcc -c $(GCC_ARGS) $<

clean: 
	rm -rf *.o hostalive