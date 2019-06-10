DEP = main.o sll_node.o
CFLASS = -Werror
CC = gcc

test:$(DEP)
	$(CC) -o $@ $^
%.o :%.c
	$(CC) -c -o $@ $^
clean:
	rm *.o test
.PHONY: clean