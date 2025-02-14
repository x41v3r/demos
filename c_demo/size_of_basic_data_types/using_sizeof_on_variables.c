#include <stdio.h>

int main()
{
    char c;
    printf("Sizeof char: %lu bytes\n", sizeof(c));
   
    int i;
    printf("Sizeof int: %lu bytes\n", sizeof(i));

    float f;
    printf("Sizeof float: %lu bytes\n", sizeof(f));

    double d;
    printf("Sizeof double: %lu bytes\n", sizeof(d));

    return 0;
}
