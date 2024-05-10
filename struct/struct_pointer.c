// 関数の引数に構造体ポインタを渡して直接参照するパターン

#include<stdio.h>

// 構造体の定義
struct person {
    int number;
    double height;
    double weight;
    double bmi;
    char judge;
};

int main(){
    struct person p = {
        0, 
        0, 
        0, 
        0, 
        ' '
    };
    int return_code;
    void CalcBmiEx(struct person *p); // プロトタイプ宣言

    printf("肥満度(BMI)の計算を行います\n");
    printf("体重(kg)と身長(cm)を入力してください ==> ");
    scanf("%lf%lf", &p.weight, &p.height);
 
    CalcBmiEx(&p);

    if (p.bmi > 0){
        printf("BMIは%.2fです。\n", p.bmi);
        switch(p.judge){
            case 'H':
                printf("肥満です。\n");
                break;
            case 'N':
                printf("標準です。\n");
                break;
            case 'L':
                printf("痩せすぎです。\n");
                break;
            default:
                break;
        }
        return_code = 0;
    } else {
        printf("入力値が不正です。\n");
        return_code = 1;
    }
    return return_code;
}

void CalcBmiEx(struct person *p){
    // 構造体をポインタで渡した場合にデータにアクセスする場合は
    //    アロー演算子（->）
    //    (*).
    // のどちらかを使う

    printf("p->height: %lf\n", p->height); // pはポインタだけどアロー演算子でメンバを参照する場合はアドレスではなく値が返ってくる
    printf("(*p).height: %lf\n", (*p).weight);  // これでもOK


    if (p->height <= 0 || p->weight <= 0){
        p->bmi = -1;
    } else {
        p->bmi = p->weight / ((p->height / 100) * (p->height / 100));
        if (p->bmi >= 25){
            p->judge = 'H';
        } else if (p->bmi >= 18.5){
            p->judge = 'N';
        } else {
            p->judge = 'L';
        }
    }
}