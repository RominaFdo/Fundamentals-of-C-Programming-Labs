#include <stdio.h>
int main() {
    int a,b,c,d,e;
    printf("Enet marks of the five subjects : \n");
    scanf("%d\n %d\n %d\n %d\n %d" , &a, &b, &c, &d, &e);
    float Tot = a+b+c+d+e;
    float avg = Tot/5;
    printf("Total : %0.f \n", Tot);
    printf("Average : %.2f \n",avg);
    printf("Percentage : %.2f ", avg);
    return 0;
}
