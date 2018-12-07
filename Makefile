AR=ar
CC=gcc
LIB=libfuncs.a
EXEC=myDaily
CFLAGS=-Wall
OBJS= todolist.o schedule.o rank.o famous.o lotto.o todayMenu.o sendList.o

all: $(LIB) $(EXEC)
$(LIB): $(OBJS)
	$(AR) rv $@ $(OBJS)
$(EXEC): main.o $(LIB)
	$(CC) -o myDaily main.o -L. lfuncs
%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@ -I ./include/
clean:
	rm -f $(OBJS) $(LIB) $(EXEC)

#myDaily : main.o todolist.o schedule.o rank.o famous.o lotto.o todayMenu.o sendList.o
#	gcc -o myDaily main.o todolist.o schedule.o rank.o famous.o lotto.o todayMenu.o
#libfuncs.a : main.o todolist.o schedule.o rank.o famous.o lotto.o todayMenu.o sendList.o
#	ar rv $@ main.o todolist.o schedule.o rank.o famous.o lotto.o todayMenu.o sendList.o
#main.o : main.c
#	gcc main.c -o main.o -g -c -L. -lfuncs -I./include/
#todolist.o : todolist.c
#	gcc todolist.c -o todolist.o -g -c -I./include/
#schedule.o : schedule.c
#	gcc schedule.c -o schedule.o -g -c -I./include/
#rank.o : rank.cpp
#	g++ -c rank.cpp -o rank.o
#famous.o : famous.c
#	gcc famous.c -o famous.o -g -c -I./include/
#lotto.o : lotto.c
#	gcc lotto.c -o lotto.o -g -c -I./include/
#todayMenu.o : todayMenu.cpp
#	g++ -c todayMenu.cpp -o todayMenu.o
#sendList.o : sendList.cpp
#	g++ -c sendList.cpp -o sendList.o
#clean :
#	rm -f MyDaily main.o todolist.o schedule.o rank.o famous.o lotto.o todayMenu.o
