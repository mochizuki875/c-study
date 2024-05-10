#include <stdio.h>

int main(){
    double keisu[5];
    keisu[0] = 1.0;
    keisu[1] = 2.0;
    keisu[2] = 3.0;
    keisu[3] = 4.0;
    keisu[4] = 5.0;

    printf("%lo\n", sizeof(keisu));
    printf("%lo\n", sizeof(keisu)/sizeof(keisu[0]));

    for (int i=0; i < sizeof(keisu)/sizeof(keisu[0]); i++){
        printf("keisu[%d] = %f\n", i, keisu[i]);
    }

    // double array[]={1.0, 2.0, 3.0, 4.0, 5.0};

}