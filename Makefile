main : main.o anniversary.o rank.o
	gcc -o main main.o anniversary.o
main.o : main.c
	gcc main.c -o main.o -g -c -I./include/
anniversary.o : anniversary.c
	gcc -c -g anniversary.c -I./include/

rank.o : rank.cpp
	g++ -c rank.cpp
clean :
	rm -f anniversary.o main main.o rank rank.o
