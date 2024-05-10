#include<stdio.h>

int main() {

    double taijyu;
    double sinchyo;
    double bmi;

    printf("BMIを計算します。\n");
    printf("体重(kg)を入力してください: ");
    scanf("%lf", &taijyu);
    printf("身長(m)を入力してください: ");
    scanf("%lf", &sinchyo);
    sinchyo = sinchyo / 100.0;

    bmi = taijyu / sinchyo / sinchyo;
    printf("BMIは%.2fです。\n", bmi);

    if(bmi>=25.0) {
        printf("肥満です。\n");
    } else if(bmi>=18.5) {
        printf("標準です。\n");
    } else {
        printf("痩せています。\n");
    }

    return 0;

}




