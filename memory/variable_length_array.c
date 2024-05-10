// 可変長配列
// 配列用のメモリを動的に確保する

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int *heap;

    int n=5;

    // int型の要素10個分のメモリを確保
    // (int*)というキャストはなくても大丈夫（C++のコンパイラだとエラーになるらしい）
    heap = (int*)malloc(sizeof(int) * n); 
    // heap = malloc(sizeof(int) * n); 

    if(heap == NULL) exit(0);

    for(i = 0; i < n; i++){
        heap[i] = i;
    }

    for(i = 0; i < n; i++){
        printf("heap[%d] = %d\n", i, heap[i]);
    }

    printf("---------10個分のメモリを追加で確保-----------\n");
    // 10個分のメモリを追加で確保
    heap = (int*)realloc(heap, sizeof(int) * (n+10));

    for(i = n; i < n+10; i++){
        heap[i] = i;
    }

    for(i = n; i < n+10; i++){
        printf("heap[%d] = %d\n", i, heap[i]);
    }


    free(heap); // メモリ解放

    return 0;
}