

#include <stdio.h>


int main(){
    
    int s;
    int even = 0, odd = 0;

    int nums[s];

    printf("Enter the size of the array: ");
    scanf("%d", &s);

    for (int i = 0; i < s; i++){
        printf("Enter the elements: ");
        scanf("%d", &nums[i]);

        if (nums[i] % 2 ==0){
            even += 1;
        }else{
            odd += 1;
        }
    }

    printf("Odd Count: %d\n",odd);
    printf("Even count: %d",even);


}