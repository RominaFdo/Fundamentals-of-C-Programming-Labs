#include <stdio.h>
int main(){
    int arr1[3][3]={2,2,3,3,2,4,1,3,4};
    int arr2[3][3]= {3,5,7,4,2,1,3,2,1,};
    int mul[3][3];
    int a ,b;
    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            mul[i][j]=0;
            for(int k=0;k<3;k++){
                mul[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d  ",mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}