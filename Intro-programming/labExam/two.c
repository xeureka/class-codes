#include <stdio.h>

void pyramid(){
    int rows = 5;

    for (int i = 0; i < rows; i++) {

   
        for (int j = 0; j < 2 * (rows - i) - 1; j++) {
            printf(" ");
        }


        for (int k = 0; k < 2 * i + 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
};

void numberTriangle(){
        for(int i = 1; i <= 5; i++) {
            for(int j = 5; j >= 6 - i; j--) {
                printf("%d ", j);
        }
        printf("\n");
    }
}


int main() {
    // numberTriangle();
    pyramid();
    

}



