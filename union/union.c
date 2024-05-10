// 共有体
// structと使い方はほぼ同じ
// union（共用体）はメモリを共有しているため、最後に代入した値が残る（複数の値を保持できない）

#include<stdio.h>

union Data {
    int i;
    float f;
    double d;
};

struct st_1 {
    int x1;
    float y1;
    double z1;
};

struct st_2 {
    int x2;
    double z2;
};

struct st_3 {
    int x3;
};

union Union {
    struct st_1 st1;
    struct st_2 st2;
    struct st_3 st3;
};

int main(){
    union Data data;

    data.i = 10;
    data.f = 20.0;
    data.d = 30.0;
    printf("data.i = %d\n", data.i);
    printf("data.f = %f\n", data.f);
    printf("data.d = %f\n", data.d); // 最後に格納したデータのみが保持される

    // struct st_1 data1 = {1, 1.0, 1.0};
    // struct st_2 data2 = {2, 2.0, 2.0};
    // struct st_3 data3 = {3, 3.0, 3.0};

    // それぞれの構造体を同時に使う必要がなければ、↑のように個別にstructを定義するよりもメモリ効率が良い。

    union Union union_data;
    union_data.st1 = (struct st_1){1, 1.0, 1.0};
    printf("union_data.st1.x1 = %d\n", union_data.st1.x1);
    printf("union_data.st1.y1 = %f\n", union_data.st1.y1);

    union_data.st2 = (struct st_2){2, 2.0};
    printf("union_data.st2.x2 = %d\n", union_data.st2.x2);
    printf("union_data.st2.z2 = %f\n", union_data.st2.z2);

    union_data.st3 = (struct st_3){3};
    printf("union_data.st3.x3 = %d\n", union_data.st3.x3);
    
    return 0;
}