
#include <stdio.h>

int main() {
    int code;
    printf("Enter Telephone code :  \n");
    scanf("%d", &code);
    switch( code) {
        case 11 :
            printf("Delhi");
            break;
        case 22 :
            printf("Mumbai");
            break;
        case 33 :
            printf("Kolkata");
            break;
        case 40:
            printf("Chennai");
            break;
        default:
            printf("Area code is not recognized. ");
            break;
    }
    return 0;
}
