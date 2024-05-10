#include<stdio.h> // /usr/include からヘッダファイルを読み込む
#include "./common/common.h" // 任意の場所からヘッダファイルを読み込む
#include "./common/types.h" // 任意の場所からヘッダファイルを読み込む

int main(){
    struct point p1 = {10, 20};
    printf("square: %d\n", square(p1)); 

    printf("TAX: %f\n", TAX); // マクロ定義した値を表示
    
    int price = 100;
    printf("price: %lf\n", GetPrice(price)); // マクロ定義した値を表示

    return 0;
}