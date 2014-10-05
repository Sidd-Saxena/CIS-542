CC = gcc
CFLAGS = -Wall 
#LFLAGS = -Wall
DEBUG= -gdb
ODIR=obj
OBJ = Rev_string.o ReverseString.o
DEPS = Reverse.h

%.0: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

ReverseString: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

run: ReverseString
	./ReverseString

clean:
	rm -f $(ODIR)/*.o *~(CLAGS) $(INCDIR)/*~

