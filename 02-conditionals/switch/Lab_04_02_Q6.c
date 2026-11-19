
#include <stdio.h>

int main() {
    char grade;
    printf("Enter your grade :  \n");
    scanf("%c", &grade);
    switch( grade) {
        case 'A' :
            printf("Excellent");
            break;
        case 'B' :
            printf("Well Done");
            break;
        case 'C' :
            printf("Well Done");
            break;
        case 'D':
            printf("You Pass");
            break;
        case 'F':
            printf("Better Try Again");
            break;
        default:
            printf("Invalid Grade");
            break;
    }
    return 0;
}
