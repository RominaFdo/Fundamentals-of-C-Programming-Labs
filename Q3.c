#include <stdio.h>
int main() {
    int a;
    int b;
    printf("   Enter first angle of the triangle : \n");
    scanf("%d" , &a);
    printf("   Enter second angle of the triangle : \n");
    scanf("%d" , &b);
    int  C = 180-(a + b);
    printf("Third angle of the triangle : %d degrees", C);
    return 0;
}