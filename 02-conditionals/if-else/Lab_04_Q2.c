
#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    if (year%100 == 0) {
        if (year%400 == 0) {
            printf("A leap year");
        }

        else{
            printf("Not a leap year");
        }
    }
    else if(year%4 == 0) {
        printf("A leap year");
    }
    else{
        printf("Not a leap year");
    }
    return 0;
}
