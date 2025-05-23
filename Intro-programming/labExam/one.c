

#include <stdio.h>

int main(){

    float num1,num2,result;
    char operation;

    printf("Enter the First Number: ");
    scanf("%f", &num1);
    

    printf("Enter the Second Number: ");
    scanf("%f", &num2);

    printf("Enter operation: ");
    scanf("%c", &operation);

    switch (operation)
    {

        case '+':
            result = num1 + num2;
            printf("Sum = %d", result);
            break;
        
        case '-':
            result = num1 + num2;
            printf("Subtraction = %d",result);
            break;
        
        case '*':
            result = num1 * num2;
            printf("Product: %d", result);
        
        case '/':
            
            if (num2 == 0){
                printf("We cant divide number by 0");
                break;
            }else{
                result = num1 / num2;
                printf("Divison: %2f", result);
                break;
            }
        
        default:
            printf("Invalid operator and operand added !!");
        
    }
    

}

