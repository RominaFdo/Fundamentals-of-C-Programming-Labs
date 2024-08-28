#include <stdio.h>
#include <math.h>

int CelciTOFahren( int a);

int main(){
    int c;
    printf("Enter Temperature in Celsius :");
    scanf("%d", &c);
    int p = CelciTOFahren(c);
    printf("%dC in Fahrenheit = %d \n" , c ,p);
    return 0;
}

int CelciTOFahren(int a){
    return (a*(9/5)+32);
}
