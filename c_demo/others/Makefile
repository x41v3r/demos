# the compiler
CC = gcc

src= main.o types_operators_and_expressions.o control_flow.o  pointers_and_arrays.o io.o
target=c_demo

$(target): $(src)
	$(CC) $^ -o $(target)

%.o: %.c
	$(CC) -c $< -o $@

.PHONY: clean
clean: 
	rm -rf *.o c_demo
