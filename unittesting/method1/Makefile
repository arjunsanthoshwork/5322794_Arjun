object.o: test.c sum.c unity.c
	gcc $^ -c
all: test.o sum.o unity.o
	gcc $^ -o all.out
run: all
	./all.out
clean:
	cmd /c del /Q *.o *.out

