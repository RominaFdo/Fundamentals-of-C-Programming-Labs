
#include <stdio.h>

int main() {
    int start, end,unit;
    float bill;
    printf("Enter starting meter reader : \n");
    scanf("%d", &start);
    printf("Enter ending meter reader : \n");
    scanf("%d", &end);
    unit = end - start;
    if (unit >= 0 && unit <=100 ) {
        bill = 1.50 * unit;
    }
    else if(unit >= 101 && unit <= 200 ) {
        bill = (1.50 * 100) + (unit - 100) * 2.50;
    }
    else if (unit >= 201){
        bill = (1.50 * 100) + (2.50 * 100) + (unit - 200) * 3.50;
    }
    printf("Your electricity bill is : Rs %.2f", bill);
    return 0;
}
