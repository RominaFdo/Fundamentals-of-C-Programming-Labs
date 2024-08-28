#include <stdio.h>
struct Complex{
    float real;
    float imag;
};

int main(){
    struct Complex comp1;
    struct Complex comp2;

    printf("Enter 1st complex number\n");
    printf("Enter real and imaginary respectively:");
    scanf("%f" , &comp1.real);
    scanf("%f" , &comp1.imag);

    printf("\nEnter 2nd complex number\n");
    printf("Enter real and imaginary respectively:");
    scanf("%f" , &comp2.real);
    scanf("%f" , &comp2.imag);

    printf("Sum=%.1f+%.1fi",(comp1.real+comp2.real),(comp1.imag+comp2.imag));

}