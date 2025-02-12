#include <stdio.h>

/*
 * Swap Two Numbers Using Temporary Variable
 */

int main()
{
    int a = 10;
    int b = 20;
    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d, b = %d\n",a,b);
    return 0;
}
