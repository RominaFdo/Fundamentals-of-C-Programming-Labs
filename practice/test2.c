#include <stdio.h>
void displayArray(int arr[4][3] ,int row,int col){
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            printf("%d\t" , arr[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int arr[4][3];
    for (int p= 0; p<4; p++){
        for (int q= 0; q<3; q++){
            printf("Enter Number %d %d : ", p , q);
            scanf("%d" , &arr[p][q]);
        }
    }
    printf("Array before rotating : \n");
    displayArray(arr,4,3);

    int backup[3];
    for (int j=0; j<3; j++){
        backup[j] = arr[3][j];
    }

    for (int i=3; i>=0; i--){
        if (i == 0){
            for (int j = 0; j < 3; j++) {
                arr[i][j] = backup[j];
            }
        }
        else
        {
            for (int j = 0; j < 3; j++) {
                arr[i][j] = arr[i - 1][j];
            }
        }
    }
    printf("Array after rotating : \n");
    displayArray(arr,4,3);

    return 0;
}