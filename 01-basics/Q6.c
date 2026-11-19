#include <stdio.h>
int main() {
    int distance;
    float fuel;
    printf("Input travelled distance in kms : \n");
    scanf("%d" , &distance);
    printf("Input spent fuel in liters : \n");
    scanf("%f" , &fuel);
    float avg = fuel / distance;
    printf("Average fuel consumption : %.2f liters per km", avg );
    return 0;
}
