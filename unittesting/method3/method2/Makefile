srcs = test.c sum.c
objs = test

object.o: $(srcs)
	gcc $^ -c
all: $(objs)
	gcc $^ -o all.out
run: all
	./all.out
clean:
	cmd /c del /Q *.o *.out
