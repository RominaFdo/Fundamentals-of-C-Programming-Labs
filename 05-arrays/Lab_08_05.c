#include <stdio.h>
double calculateAverage(int arr[], int size);

int main() {
    int arr[] = {12,15,18,25,45};
    int size = sizeof(arr) / sizeof(arr[0]);
    double average = calculateAverage(arr, size);
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nAverage: %.2f\n", average);
    return 0;
}
double calculateAverage(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}