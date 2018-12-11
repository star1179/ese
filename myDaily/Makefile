CC=gcc
EXEC=myDaily
CFLAGS=-Wall

$(EXEC): main.o
	$(CC) -o $(EXEC) main.o -L../lib -lfuncs -lstdc++
%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@
clean:
	rm -f $(EXEC) main.o
