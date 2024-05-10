#include <stdio.h>

#define EXCISETAX 0.03 // 定数宣言
#define PRODUCT "コーヒー" // 文字列定数
#define PRINT_PROD printf("商品名: %s\n", PRODUCT) // 処理を定義することもできる
#define PRINT_PRICE(PRICE) printf("税込価格: %d\n", PRICE) // 処理を定義することもできる

int main(void) {
    int price;

    printf("本体価格: ");
    scanf("%d", &price);
    price=(int)(price*(1+EXCISETAX)); // int型にキャスト

    PRINT_PRICE(price);
    PRINT_PROD;

    return 0;
}