#include <stdio.h>
#include <math.h>

int fact( int a);

int main(){
    int n;
    printf("Enter Number:");
    scanf("%d", &n);
    int p = fact(n);
    printf("Factorial of %d = %d \n" , n ,p);
    return 0;
}

int fact(int a){
    int y = 1;
    for (int i = a; i > 0; i--){
        y = y * i;
    }
    return y;
}

