CC = gcc
CFLAGS = -Wall 
#LFLAGS = -Wall
DEBUG= -gdb
ODIR=obj
OBJ = timedifference.o problem2.o
DEPS = timedifference.h

%.0: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

problem2: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

run: problem2
	./problem2


clean:
	rm -f $(ODIR)/*.o *~(CLAGS) $(INCDIR)/*~

