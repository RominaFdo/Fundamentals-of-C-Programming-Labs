#include <stdio.h>
#include <math.h>

double triangleArea( double h, double b);

int main(){
    double n1 , n2;
    printf("Enter Length of the Base:");
    scanf("%lf", &n1);
    printf("Enter Length of the height:");
    scanf("%lf", &n2);
    double p =triangleArea(n1 , n2);
    printf("Area of triangle with a height of %.2f and base of %.2f = %.2f \n" , n1 ,n2 ,p);
    return 0;
}

double triangleArea(double h, double b){
    double y = (h * b /2);
    return  y;
}
