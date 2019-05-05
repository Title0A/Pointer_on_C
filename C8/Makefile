DEP = main.o example.o homeWork.o
CFLASS = -Werror
CC = gcc

test:$(DEP)
	$(CC) -o $@ $^
%.o :%.c
	$(CC) $(CFLASS) -c -o $@ $^
clean:
	rm *.o test
.PHONY: clean