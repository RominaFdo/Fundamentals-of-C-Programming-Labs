
#include <stdio.h>

int main() {
    int amount;
    float price;
    printf("Enter purchase amount : \n");
    scanf("%d", &amount);
    if (amount > 5000) {
        price = amount * 115/100;
    }
    else {
        price = amount * 110/100;
    }
    printf("Amount to be payed = %.2f" , price);
    return 0;
}
