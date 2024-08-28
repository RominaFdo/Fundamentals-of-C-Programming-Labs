#include <stdio.h>
#define IS_EVEN(x) ((x % 2) == 0?(printf("Number is Even")):(printf("Number is Odd")))

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    IS_EVEN(number);
    return 0;
}