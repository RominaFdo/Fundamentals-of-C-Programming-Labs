#include <stdio.h>
#include <string.h>

struct nums{
    int num1;
    int num2;
};

int main(){
    struct nums N;
    struct nums* ptr = &N;
    printf("Enter Number 1:");
    scanf("%d" , &ptr->num1);
    printf("Enter Number 2:");
    scanf("%d" , &ptr->num2);

    printf("Sums of %d and %d: %d\n" , ptr->num1, ptr->num2,ptr->num1*ptr->num2);


}