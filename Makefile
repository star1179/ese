
myDaily : main.o todolist.o schedule.o rank.o famous.o lotto.o todayMenu.o
	gcc -o myDaily main.o todolist.o schedule.o rank.o famous.o lotto.o todayMenu.o
main.o : main.c
	gcc main.c -o main.o -g -c -I./include/
todolist.o : todolist.c
	gcc todolist.c -o todolist.o -g -c -I./include/
schedule.o : schedule.c
	gcc schedule.c -o schedule.o -g -c -I./include/
rank.o : rank.cpp
	g++ -c rank.cpp -o rank.o
famous.o : famous.c
	gcc famous.c -o famous.o -g -c -I./include/
lotto.o : lotto.c
	gcc lotto.c -o lotto.o -g -c -I./include/
todayMenu.o : todayMenu.cpp
	g++ -c todayMenu.cpp -o todayMenu.o
clean :
	rm -f MyDaily main.o todolist.o schedule.o rank.o famous.o lotto.o todayMenu.o
