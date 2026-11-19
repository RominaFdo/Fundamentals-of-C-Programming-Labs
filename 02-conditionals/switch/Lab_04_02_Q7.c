
#include <stdio.h>

int main() {
    char operation;
    float num1,num2;
    printf("Enter first number :  \n");
    scanf("%f", &num1);
    printf("Enter operation :  \n");
    scanf("%s", &operation);
    printf("Enter second number :  \n");
    scanf("%f", &num2);
    switch(operation) {
        case '+' :
            printf("Answer = %.2f" , (num1 + num2));
            break;

        case '-' :
            printf("Answer = %.2f" , (num1 - num2));
            break;

        case '*' :
            printf("Answer = %.2f" , (num1 * num2));
            break;

        case '/' :
            printf("Answer = %.2f" , (num1 / num2));
            break;
        default:
            printf("Invalid.");
            break;
    }
    return 0;
}
