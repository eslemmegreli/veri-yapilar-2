all:compile run

compile:
	gcc -I ./include/ -o ./lib/Queue.o  -c ./src/Queue.c
	gcc -I ./include/ -o ./lib/Stack.o  -c ./src/Stack.c
	gcc -I ./include/ -o ./lib/Node.o  -c ./src/Node.c
	gcc -I ./include/ -o ./bin/main ./lib/Array.o ./lib/Queue.o ./lib/Stack.o ./lib/Node.o ./main.c
run:
	./bin/main