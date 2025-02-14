#include <stdio.h>

int main()
{
    double d;
    double *d_ptr = &d;

    unsigned long long start = (unsigned long long) d_ptr;
    d_ptr++;
    unsigned long long end = (unsigned long long) d_ptr;

    unsigned long long size = end - start;

    printf("The size of double: %llu bytes\n", size);

    return 0;
}
