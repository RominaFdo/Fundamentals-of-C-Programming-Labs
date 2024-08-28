
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    switch( a) {
        case (20): printf("I like Ice Cream"); break;
        case (30): printf("I like Chocolate"); break;
        case (60): printf("I like Apple"); break;
        default: printf("I do not like anything"); break;
    }
    return 0;
}
