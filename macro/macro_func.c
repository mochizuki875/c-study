#include <stdio.h>

#define PRINT_TEMP printf("temp: %d\n", temp) // 処理を定義することもできる

int main(void) {
    int temp = 10;

    PRINT_TEMP;

    return 0;
}