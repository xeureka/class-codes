

#include <stdio.h>


int main(){
    
    int s;
    int product = 1;

    int nums[s];

    printf("Enter the size of the array: ");
    scanf("%d", &s);

    for (int i = 0; i < s; i++){
        printf("Enter the elements: ");
        scanf("%d", &nums[i]);
        product *= nums[i];
    }

    printf("Product = %d", product);
}