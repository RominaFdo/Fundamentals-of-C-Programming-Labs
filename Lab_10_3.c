#include <stdio.h>
#define SUM(a, b) ((a) + (b))
#define MULTIPLY(a, b) ((a) * (b))

int main() {
    double num1, num2;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
//    double sum = SUM(num1, num2);
    double product = MULTIPLY(num1, num2);
    printf("Summation: %.2lf\n", SUM(num1, num2));
    printf("Multiplication: %.2lf\n", product);

    return 0;
}