
#include <stdio.h>
#include <math.h>

int main() {
    int shape;
    float rad,area,s,s1,s2,s3;
    printf("Enter \n 1 for Circle \n 2 for Rectangle \n 3 for Trianle:  \n");
    scanf("%d", &shape);
    switch( shape) {
        case 1 :
            printf("Enter Radius : \n");
            scanf("%f", &rad);
            area = 3.14 * rad * rad;
            printf("Area of  the Circle : %.2f ", area);
            break;
        case 2 :
            printf("Enter length os side 1 : \n");
            scanf("%f", &s1);
            printf("Enter length os side 2 : \n");
            scanf("%f", &s2);
            area = s1 * s2;
            printf("Area of  the Rectangle : %.2f ", area);
            break;
        case 3:
            printf("Enter length os side 1 : \n");
            scanf("%f", &s1);
            printf("Enter length os side 2 : \n");
            scanf("%f", &s2);
            printf("Enter length os side 3 : \n");
            scanf("%f", &s3);
            s = (s1+s2+s3)/2;
            area = pow((s*(s - s1)*(s - s2)*(s - s3))  ,0.5);
            printf("Area of  the Rectangle : %.2f ", area);
            break;
            break;
        default:
            printf("Invalid");
            break;
    }
    return 0;
}
