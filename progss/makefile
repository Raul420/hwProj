all: hello
hello: main.o factorial.o printhello.o
	gcc main.o factorial.o printhello.o -o hello
main.o: main.c
	gcc -c main.c
factorial.o: factorial.c
	gcc -c factorial.c
hello.o: printhello.c
	gcc -c printhello.c
clean:
	rm -rf *.o hello

