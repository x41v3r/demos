#include <stdio.h>
#include <stdint.h>

void print_a_pointer()
{
    printf("\n*********** print_a_pointer ***********\n");
    int a = 10;
    printf("pointer to a: %d\n",a);
    printf("pointer to a: 0x%lx\n",(uintptr_t)&a);
}

void pointer_test()
{
    printf("\n************ pointer_test ************\n");
    unsigned long mem_address = 0x7ffef3e7ca84;
    int *ptr = (int*)mem_address;
    int value = *ptr;
    printf("value: %d\n",value);
}
