#include<stdio.h>

// 配列は内部的にはポインタ
// 配列名は配列の先頭要素のアドレスを示すポインタになっている

int main(){
    int a[]={1, 2, 3, 4, 5};
    char message[]="Hello, World!"; // 文字列はchar型の配列で表現される（char型で表現できるのは1文字のみ）

    printf("a = %p\n", a); // 先頭のポインタを取得
    printf("&a[0] = %p\n", &a[0]); // ↑と同じ

    printf("a[0] = %d\n", a[0]);

    printf("message = %p\n", message); // 先頭のポインタを取得
    printf("message[0] = %c\n", message[0]);
    printf("message = %s\n", message);
}