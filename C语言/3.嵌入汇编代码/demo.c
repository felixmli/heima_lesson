#include <stdio.h>

int main()
{
    int a, b, c;

    // 下面是在Visual Studio中使用MSVC编译器的语法，MSYS2中使用的是GCC的内联汇编语法
    // __asm
    // {
    //     mov a, 3
    //     mov b, 4
    //     mov eax, a
    //     add eax, b
    //     mov c, eax
    // }

    printf("%d\n", c);
    return 0;
}