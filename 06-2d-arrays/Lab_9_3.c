#include <stdio.h>

int main(){
    int arr[3][3]={2,3,5,1,8,9,6,7,0,};
    int sum = 0;
    for (int i=0; i<3; i++){
        sum = sum + arr[i][i];
    }
    printf("Sum of diagonal value = %d" , sum);
    return 0;

}