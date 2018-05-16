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
