// ポインタが示すデータへのアクセスには*を使う
// int型を格納する変数のポインタpを宣言する時は*pとすることで「*p」そのものはint型のデータになる

#include<stdio.h>

int main(){

    printf("=== 初期状態 ===\n");
    int number = 10;
    int number2 = 20;
    int *p_number = &number; // 宣言では*が必要

    printf("number = %d\n", number);
    printf("p_number = %p\n", p_number);

    printf("=== ポインタ参照先変更（p_number = &number2） ===\n");

    p_number = &number2; // 普通にポインタとして使う時は*は不要

    printf("number = %d\n", number);
    printf("p_number = %p\n", p_number);
    printf("*p_number = %d\n", *p_number); // *をつけると参照先の値を取得できる

    printf("=== ポインタを直接書き換え（*p_number=30） ===\n");

    *p_number=30;
    printf("number = %d\n", number);
    printf("number2 = %d\n", number2);
    printf("p_number = %p\n", p_number);
    printf("*p_number = %d\n", *p_number);

    return 0;
}