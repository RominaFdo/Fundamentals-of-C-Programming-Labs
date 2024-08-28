
#include <stdio.h>

int main() {
    int speed;
    printf("Enter speed : \n");
    scanf("%d", &speed);
    if (speed >= 31 && speed<=40 ) {
        printf("Fine = 50 pounds");
    }
    else if (speed >= 41 && speed<=50) {
        printf("Fine : 75 pounds");
    }
    else if (speed > 50) {
        printf("Fine : 100 pounds");
    }

    return 0;
}
