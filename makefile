main: main.o board.o
	gcc -Wall -o main main.o board.o
	
main.o:main.c
	gcc -Wall -c -o main.o main.c
	
board.o:board.c
	gcc -Wall -c -o board.o board.c
	
	
