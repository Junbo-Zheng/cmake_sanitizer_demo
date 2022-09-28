#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a = 1;
    int b = 0;

    int c = a / b;
    (void)c; /* fix warning */

    char* ptr = malloc(100);
    *ptr = 100;
    printf("hello world!\n");

    return 0;
}
