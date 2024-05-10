// コンパイル時
// gcc -o main main.c commonlib/sum.c 

#include<stdio.h>
#include "commonlib/sum.h"

int main(void)
{
    int value;
    value = sum(1, 10);
    printf("%d\n", value);

    printf("%d\n", Public);

    return 0;
}