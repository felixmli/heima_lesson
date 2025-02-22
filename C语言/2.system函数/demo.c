/*
    system函数的使用
    1. 需要包含#include <stdlib.h>
    2. int system(const char *command)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char *command = "calc"; // 调用系统的命令
    system(command);

    return 0;
}