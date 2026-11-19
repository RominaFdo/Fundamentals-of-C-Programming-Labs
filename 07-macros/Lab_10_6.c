#include <stdio.h>
#define IS_DIVISIBLE_BY_TEN(x) ((x % 10) == 0? printf("TRUE"):printf("FALSE"))

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    IS_DIVISIBLE_BY_TEN(num);
    return 0;
}