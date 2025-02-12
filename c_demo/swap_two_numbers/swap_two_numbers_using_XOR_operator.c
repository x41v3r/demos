#include <stdio.h>

/*
 * We can also use the bitwise XOR operator to swap the values without using a temporary variable.
 */

int main()
{
    int a = 10;
    int b = 20;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("a = %d, b = %d\n",a,b);
    return 0;
}
