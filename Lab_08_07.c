#include <stdio.h>
#include <math.h>

int main() {
    int n = 12;
    double x[12] = {1,0,3.2,4,1,5,7,0,2,1.1,-1,4.1};
    double y[12] = {3,5,0,-1,0.5,-1,-2,3,4,1,8.1,2};
    double sum_x = 0.0, sum_y = 0.0, sum_xy = 0.0, sum_x2 = 0.0, sum_y2 = 0.0;

    printf("X ");
    for (int i = 0; i<n; i++){
        printf("%.1f  ", x[i]);
        sum_x += x[i];
        sum_x2 += x[i] * x[i];
    }

    printf("\nY ");
    for (int i = 0; i<n; i++){
        printf("%.1f  ", y[i]);
        sum_y += y[i];
        sum_y2 += y[i] * y[i];
    }

    for (int i = 0; i < n; i++) {
        sum_xy += x[i] * y[i];
    }

    double up = n * sum_xy - sum_x * sum_y;
    double down_x = n * sum_x2 - sum_x * sum_x;
    double down_y = n * sum_y2 - sum_y * sum_y;
    double r = up / (sqrt(down_x * down_y));
    printf("\nCorrelation Coefficient (r): %.4lf\n", r);

    double by_x = up / down_x;
    double y_bar = (sum_y - by_x * sum_x) / n;
    printf("Regression Equation of y on x = %.4lfx + %.4lf\n", by_x, y_bar);

    return 0;
}