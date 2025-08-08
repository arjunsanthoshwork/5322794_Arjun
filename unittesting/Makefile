object.o: test.c sum.c 
	gcc *.c -c
all: test.o sum.o
	gcc *.o -o all.out
run: all
	./all.out
clean:
	cmd /c del /Q *.o *.out
