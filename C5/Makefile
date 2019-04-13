CC = gcc
CFLASS = -Werror -Iinclude
obj = main.o transform.o reverse_bit.o store_bit_field.o

dep_file := $(patsubst %,.%.d,$(obj))
dep_file := $(wildcard $(dep_file))

test : $(obj)
	$(CC) -o $@ $^
include $(dep_file)
%.o : %.c
	$(CC) $(CFLASS) -std=c99 -c -o $@ $< -MD -MF .$@.d
clean:
	rm *.o .*.d test
distclean:
	rm $(dep_file)
.PHONY:clean