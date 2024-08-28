#include <stdio.h>
#include <math.h>

int sumOfSquare( int a, int b);

int main(){
    int n1 , n2;
    printf("Enter Number 1:");
    scanf("%d", &n1);
    printf("Enter Number 2:");
    scanf("%d", &n2);
    int p = sumOfSquare(n1 , n2);
    printf("Sum of Squares of %d and %d = %d \n" , n1 ,n2 ,p);
    return 0;
}

int sumOfSquare(int a, int b){
    return (a*a) + (b*b);
}
