
#include <stdio.h>

int main() {
    int num;
    printf("Enetr a number to check if it's Odd or Even : ");
    scanf("%d", &num);
    (num%2 == 0) ? printf("An Even number"): printf("A Odd number");
    return 0;
}