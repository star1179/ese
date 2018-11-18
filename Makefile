main : main.o anniversary.o
	gcc -o main main.o anniversary.o
main.o : main.c
	gcc main.c -o main.o -g -c -I./include/
anniversary.o : anniversary.c
	gcc -c -g anniversary.c -I./include/
clean :
	rm -f anniversary.o main main.o
