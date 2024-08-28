// Online C compiler to run C program online
#include <stdio.h>
void inputData (double account [] [3], int rowSize);
void CalcInterest (double account[][3] , int rowSize);
void CalcBalance(double account[][3], int rowSize);
double findTotBalance(double account[][3] ,int rowSize);
void print(double account[][3], int rowSize);
double total;
int main() {
    double acc[10][3];
    inputData(acc,10);
    CalcInterest(acc , 10);
    CalcBalance(acc, 10);
    findTotBalance(acc,10);
    printf("Total amount of account balance : %.2f\n" , total);
    print(acc,10);
    return 0;
}
void inputData (double account [] [3], int rowSize){
    for (int i=0; i<rowSize; i++){
        printf("Enter Initial value %d:",i+1);
        scanf("%lf",&account[i][0]);
    }
}

void CalcInterest (double account[][3] , int rowSize){
    for (int i=0; i<rowSize; i++){
        account[i][1] = account[i][0]*4.5/100;
    }
}

void CalcBalance(double account[][3], int rowSize){
    for (int i=0; i<rowSize; i++){
        account[i][2] = account[i][0] + account[i][1];
    }
}

double findTotBalance(double account[][3] ,int rowSize){
    total = 0;
    for (int i=0; i<rowSize; i++){
        total += account[i][2];
    }
    return total;
}

void print(double account[][3], int rowSize){
    for (int i=0; i<rowSize; i++){
        printf("Amount of account balance of account %d : %.2f\n" ,i+1, account[i][2]);
    }
}