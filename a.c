#include <stdio.h>
#include <stdlib.h>

void functionA() { printf("这是函数A\n"); }

int main()
{
    /* 注册终止函数 */
    atexit(functionA);

    printf("启动主程序...\n");
    exit(0);

    printf("退出主程序...\n");

    return (0);
}
