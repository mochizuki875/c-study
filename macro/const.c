#include <stdio.h>

int main(void) {

    // 値の変更ができない定数
    // defineと異なり特定の関数内でのみ定数を使用したい場合に有効
    const double EXCISETAX = 0.03; // 定数宣言
    const char PRODUCT[] = "コーヒー"; // 文字列定数

    int price;

    printf("本体価格: ");
    scanf("%d", &price);
    price=(int)(price*(1+EXCISETAX)); // int型にキャスト

    printf("税込価格: %d\n", price);
    printf("商品名: %s\n", PRODUCT);

    return 0;
}