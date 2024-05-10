#include<stdio.h>

int v1=0;  // グローバル変数
void func1(int p_v1, char *p_v2); // プロトタイプ宣言（グローバル）

int main(){
    // int v1; // ローカル変数（mainの中ではグローバル変数ではなくこちらが優先される）
    int v2; // ローカル変数
    char v3[] = "Hello"; // ローカル変数

    func1(10,v3); // 関数の呼び出し
    printf("v1: %d\n",v1); // グローバル変数を表示（func1の中での更新が反映される）

}


void func1(int arg1, char *arg2){

    int size=sizeof(arg2)/sizeof(arg2[0]);

    printf("%s\n",arg2);

    v1 = arg1 * 2; // グローバル変数を書き換え

}