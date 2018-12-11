AR=ar
CC=gcc
LIB=libfuncs.a
EXEC=myDaily
CFLAGS=-Wall
OBJS= todolist.o schedule.o rank.o famous.o lotto.o todayMenu.o sendList.o showmenu.o

$(LIB): $(OBJS)
	$(AR) rv $@ $(OBJS)
%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@
%.o: %.cpp
	g++ -c $(CFLAGS) $< -o $@
clean:
	rm -f $(OBJS) $(LIB) $(EXEC)
