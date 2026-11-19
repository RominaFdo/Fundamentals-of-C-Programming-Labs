#include <stdio.h>
#include <math.h>

int n ;
int main(){
    printf("Enter the value for n : \n");
    scanf("%d" , &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j<(n-i); j++){
            printf("     ");
        }
        for (int j = 0; j<i; j++){
            printf("%0.f    ", pow(2,j) );
        }
        for (int j = i-2; j>=0; j--){
            printf("%0.f    " , pow(2, j));
        }
        for (int j = 0; j<(n-i); j++){
            printf("     ");
        }
        printf("\n");
    }
    return 0;
}
