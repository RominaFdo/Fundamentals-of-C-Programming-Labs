#include <stdio.h>
struct Dis{
    int feet;
    float inch;
};

int main(){
    struct Dis dis1;
    struct Dis dis2;

    printf("Enter information for 1st distance\n");
    printf("Enter feet:");
    scanf("%d" , &dis1.feet);
    printf("Enter inch:");
    scanf("%f" , &dis1.inch);

    printf("\nEnter information for 2nd distance\n");
    printf("Enter feet:");
    scanf("%d" , &dis2.feet);
    printf("Enter inch:");
    scanf("%f" , &dis2.inch);

    int F = dis1.feet + dis2.feet;
    float I = dis1.inch + dis2.inch;
    if (I>= 12){
        F = F+1;
        I = I - 12.00;
    }
    printf("Sum of distances = %d' -%.1f\"",F,I);
}