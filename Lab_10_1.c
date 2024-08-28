#include <stdio.h>
#define CIRCLE_AREA(r) (3.14159265359 * (r) * (r))

int main() {
    printf("The area of the circle with radius %d is %.2f\n",7, CIRCLE_AREA(7));

    return 0;
}