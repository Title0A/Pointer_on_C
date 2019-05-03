DEP = main.o hermite.o gcd.o ascii_to_integer.o max_list.o written_amount.o
CFLASS = -Werror
CC = gcc
test: $(DEP)
	$(CC) -o $@ $^
%.o : %.c
	$(CC) $(CFLASS) -std=c99 -c -o $@ $<

clean:
	rm *.o test
.PHONY:clean