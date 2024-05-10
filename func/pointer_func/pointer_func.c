#include<stdio.h>

void Add(int *x, int *y){
    *x = *x + 10;
    *y = *y + 20;
}

void AddArray(int *array, int size){  // 配列のサイズを引数に渡す
    for (int i = 0; i < size; i++){
        array[i] = array[i] + 10;
    }
}

void ShowIntArray(int *array){

    printf("func_array_size: %lo\n", sizeof(array)/sizeof(array[0])); // 配列を関数に渡すと先頭のポインタのみが渡されるため、配列のサイズを取得できない

    for(int i=0; array[i]; i++){ // 配列の要素が存在することをループ条件に設定
        printf("array[%d] = %d\n", i, array[i]);
    }
}

int main(){
    int a = 10;
    int b = 20;

    int array[] = {1, 2, 3, 4, 5};

    printf("org_array_size: %lo\n", sizeof(array)/sizeof(array[0]));  // 元の配列のサイズ

    Add(&a, &b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    int size = sizeof(array)/sizeof(array[0]);

    AddArray(array,size);

    ShowIntArray(array);


    return 0;
}