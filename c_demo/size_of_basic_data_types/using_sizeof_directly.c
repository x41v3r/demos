#include <stdio.h>

/*
 * Using sizeof() operator directly
 */

int main()
{
    printf("The size of char: %lu bytes\n",sizeof(char));
    printf("The size of int: %lu bytes\n",sizeof(int));
    printf("The size of float: %lu bytes\n",sizeof(float));
    printf("The size of double: %lu bytes\n",sizeof(double));
    return 0;
}
