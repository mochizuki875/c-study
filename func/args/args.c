#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    double weight;
    double height;
    double bmi;
    double CalBMI(double height, double weight);

    if(argc == 3){
        weight = atof(argv[1]);
        height = atof(argv[2]);
        bmi = CalBMI(height, weight);
        if (bmi < 0){
            printf("入力値が不正です。\n");
        } else {
            printf("BMIは%.2fです。\n", bmi);
        }
        return 0;


    } else {
        printf("引数が不正です。\n");
        return -1;
    }
}