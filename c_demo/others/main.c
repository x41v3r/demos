#include <stdio.h>
#include "types_operators_and_expressions.h"
#include "control_flow.h"
#include "pointers_and_arrays.h"
#include "io.h"


int main(void)
{
	printf("hello, world\n");

	//types operators and expressions
	integer_constants_test();
	octal_hexadecimal_integer();
	character_constant_test();
	string_constant_test();
	declarations_test();

    //control flow
    if_else_test();

    //pointers and arrays
    print_a_pointer();
  	pointer_test();

    //io

	return 0;
}
