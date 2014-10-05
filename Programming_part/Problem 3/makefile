CC = gcc
CFLAGS = -Wall 
#LFLAGS = -Wall
DEBUG= -gdb
ODIR=obj
OBJ = prime.o step3.o
DEPS = prime.h

%.0: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

step3: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

run: step3
	./step3

clean:
	rm -f $(ODIR)/*.o *~(CLAGS) $(INCDIR)/*~



