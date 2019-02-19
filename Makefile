main: main.o omikuzi.o
	gcc -o omikuzi main.o omikuzi.o
main.o: main.c
	gcc -c main.c
test: tests/test.c omikuzi.c
	gcc -o test tests/test.c omikuzi.c
omikuzi.o: omikuzi.c
	gcc -c omikuzi.c
.PHONY: clean
clean:
	rm -f omikuzi omikuzi.o main.o test

