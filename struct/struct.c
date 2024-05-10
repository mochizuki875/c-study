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
    struct person p_in = {
        0, 
        0, 
        0, 
        0, 
        ' '
    };
    struct person p_out;
    int return_code;
    struct person CalcBmiEx(struct person p); // プロトタイプ宣言

    printf("肥満度(BMI)の計算を行います\n");
    printf("体重(kg)と身長(cm)を入力してください ==> ");
    scanf("%lf%lf", &p_in.weight, &p_in.height);
 
    p_out = CalcBmiEx(p_in);

    if (p_out.bmi > 0){
        printf("BMIは%.2fです。\n", p_out.bmi);
        switch(p_out.judge){
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

struct person CalcBmiEx(struct person p){
    if (p.height <= 0 || p.weight <= 0){
        p.bmi = -1;
        return p;
    } else {
        p.bmi = p.weight / ((p.height / 100) * (p.height / 100));
        if (p.bmi >= 25){
            p.judge = 'H';
        } else if (p.bmi >= 18.5){
            p.judge = 'N';
        } else {
            p.judge = 'L';
        }
        return p;
    }
}