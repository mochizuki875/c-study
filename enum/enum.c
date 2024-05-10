// 列挙型

#include<stdio.h>

// 列挙定数を定義
// 列挙定数の実態はint型の定数
enum color { 
    RED, // 0
    GREEN, // 1
    BLUE // 2
};

enum number {
    ONE,
    TWO,
    THREE    
};

int main(){
    enum color c;
    enum number n;

    c = RED;
    // c = YELLOW; // エラーになる
    n = TWO;

    printf("c = %d\n", c);
    printf("n = %d\n", n);

    switch(c){
        case RED:
            printf("赤\n");
            break;
        case GREEN:
            printf("緑\n");
            break;
        case BLUE:
            printf("青\n");
            break;
        default:
            printf("不明\n");
            break;
    }

    return 0;
}