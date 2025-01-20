#include <stdio.h>
#include <limits.h>

void output_integer_range()
{
    printf("INT_MAX: %d\n", INT_MAX);
}

void integer_constants_test()
{
    int a = 1234;
    int b = 123456789L;

    long l = 1234;

    unsigned int ui = -1234u;
    printf("ui = %u\n",ui);

    int il = (int) 1234567890123456;
    printf("il = %d\n", il);
}

void octal_hexadecimal_integer()
{
    int a = 037;  // 31 in octal
    int b = 0x1F;  // 31 in hexadecimal
    
    printf("a(037) = %d\n", a);  // a(037) = 31
    printf("b(0x1F) = %d\n", b);  // b(0x1F) = 31
}

void floating_point_constants_test()
{

}

void character_constant_test()
{
    printf("\n********** character_constant_test **********\n");

    char c1 = '`';
    printf("c1: %c\n",c1);

    char c_zero = '0';
    printf("c_zero as an integer: %d\n", c_zero);
    printf("c_zero as a character: %c\n", c_zero);

    char c_chinese = '你';
    printf("c_chinese as an integer: %d\n", c_chinese);
    printf("c_chinese as a character: %c\n", c_chinese);
}

void string_constant_test()
{
    printf("\n*********** string_constant_test ***********\n");

    char* str_1 = "dfdsafdasfdasfs";
    printf("str1: %s\n",str_1);

    char* str_chinese = "明天，你好";
    printf("str_chinese: %s\n", str_chinese);

    printf("明天你好吗？\n");
}

void declarations_test()
{
    printf("\n************ declarations_test ************\n");
    int i1;

    printf("i1 in hexadecimal: %d\n", i1);
    printf("i1 decimal: %x\n", i1);

    char c1;
    printf("c1: %d\n",c1);

    int a;
    int *p = &a;
    if(1) *p = 5;
    printf("*p: %d\n",0[p]);

    char esc = '\\';
    int i = 0;
    float eps = 1.0e-5;
}
