
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a > 60) {
        printf("I like Ice Cream");
    }
    else if(a > 30) {
        printf("I like Chocolate");
    }
    else if(a > 20) {
        printf("I like Apple");
    }
   else{
    printf("I do not like anything");
   }
    return 0;
}
