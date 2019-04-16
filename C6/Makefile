DEP = main.o find_char.o del_substr.o reverse_string.o Eratosthenes.o Eratosthenes_2th.o
CFLASS = -Werror
CC = gcc
test: $(DEP)
	$(CC) -o $@ $^
%.o : %.c
	$(CC) $(CFLASS) -std=c99 -c -o $@ $<

clean:
	rm %.o test
.PHONY:clean