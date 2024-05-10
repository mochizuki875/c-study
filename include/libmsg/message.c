#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void hello(){
    printf("Hello\n");
}

// 文字列の先頭に"Hello"を追加する
char* add_hello(char *str){

    char *hello = "Hello ";

    char *new_str = (char*)malloc(strlen(str) + strlen(hello));
    strcpy(new_str, hello);
    strcat(new_str, str);
    return new_str;
}