#include <stdio.h> // /usr/include からヘッダファイルを読み込む
#include "libcommon/common.h" // 任意の場所からヘッダファイルを読み込む
#include "libmsg/message.h"

int main(void)
{
    int value;

    // libcommon/common.hの関数を呼び出す
    value = sum(1, 10);
    printf("sum: %d\n", value);
    printf("diff: %d\n", diff(10, 5));
    printf("%d\n", Public);

    // libmsg/message.hの関数を呼び出す
    hello();
    char *str = "World";
    char *new_str = add_hello(str);
    printf("%s\n", new_str);

    return 0;
}