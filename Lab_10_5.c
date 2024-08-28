#include <stdio.h>
#define CELSIUS_TO_FAHRENHEIT(celsius) ((9.0/5.0) * (celsius) + 32)

int main() {
    double celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = CELSIUS_TO_FAHRENHEIT(celsius);
    printf("%.2lf degrees Celsius is equal to %.2lf degrees Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}