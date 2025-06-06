
#include <stdio.h>

void rightHalfPyramid(int rows){

    for (int i = 0; i <= rows; i++){
        for (int j = 0; j < i; j ++){
            printf("* ");
        }
        printf("\n");
    }
}

int main(){

    leftHalfPyramid(6);

    return 0;
}


