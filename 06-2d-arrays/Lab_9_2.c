#include <stdio.h>

int main(){
    int arr[3][3]={2,3,5,1,8,9,6,7,0,};
    for (int i=0; i<3; i++){
        int sum = 0;
        for (int j=0; j<3; j++){
            sum = sum + arr[i][j];
        }
        printf("Sum of row %d = %d" , i+1 , sum);
        printf("\n");
    }
    return 0;

}