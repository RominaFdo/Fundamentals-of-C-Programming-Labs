#include <stdio.h>
#include <math.h>

int Fibo( int a);

int main(){
    int n;
    printf("Enter Number:");
    scanf("%d", &n);
    printf("First %d Fibonacci Numbers : \n" , n );
    Fibo(n);
    return 0;
}

int Fibo(int a){
    int c=1;
    int p=1;
    int b ;
    printf("%d " ,p);
    printf("%d " ,c);
    for(int i=2; i<a; i++){
        b=c;
        c=c+p;
        p=b;
        printf("%d " ,c);
    }
}


