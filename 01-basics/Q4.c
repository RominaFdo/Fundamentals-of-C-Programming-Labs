#include <stdio.h>
#include <math.h>
int main() {
    int a;
    printf("Enter a number to find the square root : \n");
    scanf("%d" , &a);
    float root = sqrt(a);
    printf("Square root of %d is : %.2f ", a,root);
    return 0;
}