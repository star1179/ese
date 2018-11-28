myapp_dj : myapp_dj.o schedule.o rank.o
	gcc -o myapp_dj main.o anniversary.o
myapp_dj.o : myapp_dj.c
	gcc myapp_dj.c -o myapp_dj.o -g -c -I./include/
schedule.o : schedule.c
	gcc -c -g schedule.c -I./include/
rank.o : rank.cpp
	g++ -c rank.cpp
clean :
	rm -f schedule.o myapp_dj myapp_dj.o rank rank.o
