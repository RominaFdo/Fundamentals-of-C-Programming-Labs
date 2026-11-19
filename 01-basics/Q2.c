#include <stdio.h>
int main() {
    float C;
    printf("Input temperature in Centigrade : \n");
    scanf("%f" , &C);
    float F = (C * 9 / 5) + 32;
    printf("Temperature in Faranhite : %.2f", F);
    return 0;
}
