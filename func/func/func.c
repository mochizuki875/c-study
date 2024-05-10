#include<stdio.h>

int main(){
    double height;
    double weight;
    double bmi;

    double CalBMI(double height, double weight); // プロトタイプ宣言

    printf("BMIを計算します。\n");
    printf("身長(cm)を入力してください: ");
    scanf("%lf", &height);
    printf("体重(kg)を入力してください: ");
    scanf("%lf", &weight);

    bmi = CalBMI(height, weight);
    if (bmi < 0){
        printf("入力値が不正です。\n");
    } else {
        printf("BMIは%.2fです。\n", bmi);
    }

    return 0;
}