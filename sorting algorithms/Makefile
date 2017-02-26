
output: main.o sort.o
	gcc -std=c99 main.o sort.o -o output

main.o: main.c
	gcc -std=c99 -c main.c

sort.o: sort.c sort.h
	gcc -std=c99 -c sort.c

clean:
	rm *.o output