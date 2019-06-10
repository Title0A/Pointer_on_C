DEP = main.o example.o
CFLASS = -Werror
CC = gcc

test:$(DEP)
	$(CC) -o $@ $^
%.o :%.c
	$(CC) -c -o $@ $^
clean:
	rm *.o test
.PHONY: clean