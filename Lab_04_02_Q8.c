
#include <stdio.h>
#include <stdbool.h>

int main() {
    int year,month;
    bool leap = false;
    printf("Enter Year :  \n");
    scanf("%d", &year);
    printf("Enter Month number :  \n");
    scanf("%d", &month);

    if (year%100 == 0) {
        if (year%400 == 0) {
            leap = true;
        }
    }
    else if(year%4 == 0) {
        leap = true;
    }

    switch(leap){
        case true:
            printf("Number of days in year %d : 366\n",year);
            break;
        default:
            printf("Number of days in year %d : 365\n",year);
            break;
    }

    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Number of days in the Month : 31");
            break;

        case 4: case 6: case 9: case 11:
            printf("Number of days in the Month : 30");
            break;

        case 2:
            (leap == true)? printf("Number of days in the Month  : 29"):printf("Number of days in the Month : 28");
            break;
        default:
            printf("Invalid Month or Year.");
    }

    return 0;
}
