CC = gcc
FLAG = -Wall -Werror

all:bin/chsv

test:bin/chsv_test


bin/chsv_test: build/test/main.o build/board.o
	$(CC) $(FLAG) build/test/main.o build/board.o -o bin/chsv_test



build/test/main.o:test/main.c
	$(CC) $(FLAG) -I src -I thirdparty -c test/main.c -o build/test/main.o



bin/chsv: build/main.o build/board.o
	gcc -Wall -o bin/chsv build/main.o build/board.o
	
build/main.o:src/main.c
	gcc -Wall -c -o build/main.o src/main.c
	
build/board.o:src/board.c
	gcc -Wall -c -o build/board.o src/board.c
	
dir:
	mkdir build
	mkdir bin
clean:
	rm build/*.o
