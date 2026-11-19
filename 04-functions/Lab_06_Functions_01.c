#include <stdio.h>
#include <math.h>

int multi( int a, int b);

int main(){
    int n1 , n2;
    printf("Enter Number 1:");
    scanf("%d", &n1);
    printf("Enter Number 2:");
    scanf("%d", &n2);
    int p = multi(n1 , n2);
    printf("%d x %d = %d \n" , n1 ,n2 ,p);
    return 0;
}

int multi(int a, int b){
    return (a*b);
}
