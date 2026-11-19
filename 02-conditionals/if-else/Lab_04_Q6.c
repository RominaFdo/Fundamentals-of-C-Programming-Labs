
#include <stdio.h>

int main() {
    int mark;
    printf("Enter mark : \n");
    scanf("%d", &mark);
    if (mark >= 80 && mark <= 100) {
        printf("Grade : A");
    }
    else if (mark >= 60 && mark <= 79) {
        printf("Grade : B");
    }
    else if (mark >= 40 && mark <= 59) {
        printf("Grade : C");
    }
    else if (mark <= 39) {
        printf("Grade : D");
    }
    return 0;
}
