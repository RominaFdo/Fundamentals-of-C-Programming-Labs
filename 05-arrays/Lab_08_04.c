#include <stdio.h>
int main() {
    double salaries[10];
    int count = 0;
    printf("Enter the salaries of 10 employees:\n");
    for (int i = 0; i < 10; i++) {
        printf("Employee %d: ", i + 1);
        scanf("%lf", &salaries[i]);
    }
     for (int i = 0; i < 10; i++) {
        if (salaries[i] >= 50000 && salaries[i] <= 75000) {
            count++;
        }
    }
     printf("Number of employees with salaries between 50,000 and 75,000: %d\n", count);
     return 0;
}