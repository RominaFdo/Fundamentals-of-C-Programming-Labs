#include <stdio.h>
void sortDescending(int arr[], int size);

int main() {
    int arr[] = {10,60,45,12,88,46};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Array : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    sortDescending(arr, size);
    printf("\nSorted array in descending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
void sortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}