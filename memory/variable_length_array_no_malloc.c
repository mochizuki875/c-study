// mallocを使わなくてもできる
// 可変長配列
// 配列用のメモリを動的に確保する


#include <stdio.h>

int main(void) {
    int n;
    printf("配列の要素数を入力してください: ");

    fflush(stdout); // 一応明示的にバッファのデータを標準出力に吐き出してバッファを空にしておく

    // scanfは変数への代入に成功した要素数を返す
    if(scanf("%d", &n) != 1) {
        printf("入力エラーです\n");
        return 1;
    }

    if (n <= 0) {
        printf("正の整数を入力してください\n");
        return 1;
    } else if (n > 100) {
        printf("要素数が多すぎます\n");
        return 1;
    }

    int array[n]; // 可変長配列

    for (int i = 0; i < n; i++) {
        array[i] = i;
    }

    for (int i = 0; i < n; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }   

}