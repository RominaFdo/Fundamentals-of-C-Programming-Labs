#include <stdio.h>

// Define a macro to swap two variables
#define SWAP(a, b) do { a ^= b; b ^= a; a ^= b; } while (0)

int main() {
    int x, y;

    printf("Enter two integers for swapping: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Use the SWAP macro to swap the values of x and y
    SWAP(x, y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}