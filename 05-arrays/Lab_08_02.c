#include<stdio.h>
int main() {
    int n, i, min;

    printf("Enter no of elements :");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    min = a[0];

    for (i = 1; i < n; i++) {
        if (a[i]< min) {
            min = a[i];
        }
    }
    printf("Smallest Number in the array : %d", min);
    return (0);
}