#include<stdio.h>

// 自動的に0から始まる整数値を割り当てる
enum {
    STATE_NORMAL, /* 通常 */
    STATE_POISON, /* 毒 */
    STATE_NUMBLY, /* マヒ */
    STATE_CURSE /* 呪われ */
};

int main(void){
    printf("通常: %d\n", STATE_NORMAL);
    printf("毒: %d\n", STATE_POISON);
    printf("マヒ: %d\n", STATE_NUMBLY);
    printf("呪われ: %d\n", STATE_CURSE);

    return 0;
}