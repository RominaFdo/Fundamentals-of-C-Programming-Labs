#include <stdio.h>
const float PI = 3.14159;
int main() {
    float r;
    printf("Enetr the radius : \n");
    scanf("%f" , &r);
    double area = PI * r * r;
    double circumference = 2 * PI * r;
    printf("Area of the circle : %.2lf\n", area);
    printf("Circumference of the circle : %.2lf", circumference);
    return 0;
}
