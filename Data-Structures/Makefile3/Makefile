SRC := $(wildcard *.c)
OBJ := $(patsubst %.c, %.o, $(SRC))
calc.out : $(OBJ)
	gcc -o $@ $^
clean :
	rm *.out *.o
