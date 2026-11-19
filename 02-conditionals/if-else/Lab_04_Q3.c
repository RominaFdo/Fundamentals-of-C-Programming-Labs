
#include <stdio.h>

int main() {
    float s1,s2,s3;
    printf("Enter side 1 : \n");
    scanf("%f", &s1);
    printf("Enter side 2 : \n");
    scanf("%f", &s2);
    printf("Enter side 3 : \n10");
    scanf("%f", &s3);
    if (s1 == s2 == s3) {
       printf("Equilateral Triangle");
    }
    else if(s1 == s2 || s1 == s3 || s2 == s3) {
        printf("Isosceles Triangle");
    }
    else{
        printf("Scalene Triangle");
    }
    return 0;
}
